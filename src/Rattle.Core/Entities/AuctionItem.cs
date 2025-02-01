using System;
using System.Collections.Generic;

namespace Rattle.Core.Entities
{
    public class AuctionItem
    {
        public int AuctionItemId { get; set; }
        public string Title { get; set; } = default!;
        public string Description { get; set; } = default!;
        public decimal StartingPrice { get; set; }
        public decimal CurrentPrice { get; set; }
        public DateTime EndDate { get; set; }
        public int OwnerId { get; set; }
        public bool IsClosed { get; set; }

        public User? Owner { get; set; }
        public ICollection<Bid>? Bids { get; set; }
    }
}
