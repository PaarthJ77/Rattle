using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;
using Rattle.Core.Entities;
using Rattle.Infrastructure;

namespace Rattle.Api.Controllers
{
    [ApiController]
    [Route("api/[controller]")]
    public class AuctionItemsController : ControllerBase
    {
        private readonly RattleDbContext _db;

        public AuctionItemsController(RattleDbContext db)
        {
            _db = db;
        }

        [HttpGet]
        public async Task<IActionResult> GetAll()
        {
            var items = await _db.AuctionItems.Include(a => a.Owner).ToListAsync();
            return Ok(items);
        }

        [HttpGet("{id}")]
        public async Task<IActionResult> GetById(int id)
        {
            var item = await _db.AuctionItems.Include(a => a.Owner).FirstOrDefaultAsync(a => a.AuctionItemId == id);
            if (item == null) return NotFound();
            return Ok(item);
        }

        [Authorize]
        [HttpPost]
        public async Task<IActionResult> Create([FromBody] AuctionItem auctionItem)
        {
            var userIdClaim = User.FindFirst(System.Security.Claims.ClaimTypes.NameIdentifier)?.Value;
            if (userIdClaim == null) return Unauthorized();

            auctionItem.OwnerId = int.Parse(userIdClaim);
            auctionItem.CurrentPrice = auctionItem.StartingPrice;
            auctionItem.IsClosed = false;

            _db.AuctionItems.Add(auctionItem);
            await _db.SaveChangesAsync();

            return CreatedAtAction(nameof(GetById), new { id = auctionItem.AuctionItemId }, auctionItem);
        }

        [Authorize]
        [HttpPut("{id}")]
        public async Task<IActionResult> Update(int id, [FromBody] AuctionItem auctionItem)
        {
            if (id != auctionItem.AuctionItemId)
                return BadRequest();

            var existingItem = await _db.AuctionItems.FindAsync(id);
            if (existingItem == null)
                return NotFound();

            var userIdClaim = User.FindFirst(System.Security.Claims.ClaimTypes.NameIdentifier)?.Value;
            var isAdmin = User.FindFirst("IsAdmin")?.Value == "True";
            if (existingItem.OwnerId.ToString() != userIdClaim && !isAdmin)
                return Forbid("You are not authorized to update this listing.");

            existingItem.Title = auctionItem.Title;
            existingItem.Description = auctionItem.Description;
            existingItem.StartingPrice = auctionItem.StartingPrice;
            existingItem.EndDate = auctionItem.EndDate;

            _db.AuctionItems.Update(existingItem);
            await _db.SaveChangesAsync();

            return NoContent();
        }

        [Authorize]
        [HttpDelete("{id}")]
        public async Task<IActionResult> Delete(int id)
        {
            var existingItem = await _db.AuctionItems.FindAsync(id);
            if (existingItem == null)
                return NotFound();

            var userIdClaim = User.FindFirst(System.Security.Claims.ClaimTypes.NameIdentifier)?.Value;
            var isAdmin = User.FindFirst("IsAdmin")?.Value == "True";
            if (existingItem.OwnerId.ToString() != userIdClaim && !isAdmin)
                return Forbid("You are not authorized to delete this listing.");

            _db.AuctionItems.Remove(existingItem);
            await _db.SaveChangesAsync();

            return NoContent();
        }
    }
}
