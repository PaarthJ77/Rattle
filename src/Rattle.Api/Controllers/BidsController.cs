using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.SignalR;
using Microsoft.EntityFrameworkCore;
using Rattle.Api.Hubs;
using Rattle.Core.Entities;
using Rattle.Infrastructure;

namespace Rattle.Api.Controllers
{
    [ApiController]
    [Route("api/[controller]")]
    public class BidsController : ControllerBase
    {
        private readonly RattleDbContext _db;
        private readonly IHubContext<BiddingHub> _hubContext;

        public BidsController(RattleDbContext db, IHubContext<BiddingHub> hubContext)
        {
            _db = db;
            _hubContext = hubContext;
        }

        [Authorize]
        [HttpPost]
        public async Task<IActionResult> PlaceBid([FromBody] BidRequest request)
        {
            var auctionItem = await _db.AuctionItems.FindAsync(request.AuctionItemId);
            if (auctionItem == null || auctionItem.IsClosed)
                return BadRequest("Auction not found or closed.");

            var userIdClaim = User.FindFirst(System.Security.Claims.ClaimTypes.NameIdentifier)?.Value;
            if (userIdClaim == null) return Unauthorized();

            int userId = int.Parse(userIdClaim);
            if (request.Amount <= auctionItem.CurrentPrice)
                return BadRequest("Bid must be higher than the current price.");

            auctionItem.CurrentPrice = request.Amount;

            var newBid = new Bid
            {
                AuctionItemId = request.AuctionItemId,
                BidderId = userId,
                Amount = request.Amount,
                BidTime = DateTime.UtcNow
            };

            _db.Bids.Add(newBid);
            await _db.SaveChangesAsync();

            // Broadcast update via SignalR
            await _hubContext.Clients.All.SendAsync("ReceiveBidUpdate", auctionItem.AuctionItemId, auctionItem.CurrentPrice);

            return Ok(newBid);
        }
    }

    public class BidRequest
    {
        public int AuctionItemId { get; set; }
        public decimal Amount { get; set; }
    }
}
