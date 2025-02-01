using System;

namespace Rattle.Core.Entities
{
    public class Bid
    {
        public int BidId { get; set; }
        public int AuctionItemId { get; set; }
        public int BidderId { get; set; }
        public decimal Amount { get; set; }
        public DateTime BidTime { get; set; }

        public AuctionItem? AuctionItem { get; set; }
        public User? Bidder { get; set; }
    }
}
