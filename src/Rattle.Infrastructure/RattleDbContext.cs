using Microsoft.EntityFrameworkCore;
using Rattle.Core.Entities;

namespace Rattle.Infrastructure
{
    public class RattleDbContext : DbContext
    {
        public RattleDbContext(DbContextOptions<RattleDbContext> options)
            : base(options)
        {
        }

        public DbSet<User> Users { get; set; } = default!;
        public DbSet<AuctionItem> AuctionItems { get; set; } = default!;
        public DbSet<Bid> Bids { get; set; } = default!;

        protected override void OnModelCreating(ModelBuilder modelBuilder)
        {
            base.OnModelCreating(modelBuilder);

            // User
            modelBuilder.Entity<User>()
                .HasKey(u => u.UserId);

            // AuctionItem
            modelBuilder.Entity<AuctionItem>()
                .HasKey(a => a.AuctionItemId);
            modelBuilder.Entity<AuctionItem>()
                .HasOne(a => a.Owner)
                .WithMany()
                .HasForeignKey(a => a.OwnerId)
                .OnDelete(DeleteBehavior.Restrict);

            // Bid
            modelBuilder.Entity<Bid>()
                .HasKey(b => b.BidId);
            modelBuilder.Entity<Bid>()
                .HasOne(b => b.AuctionItem)
                .WithMany(a => a.Bids)
                .HasForeignKey(b => b.AuctionItemId)
                .OnDelete(DeleteBehavior.Cascade);
            modelBuilder.Entity<Bid>()
                .HasOne(b => b.Bidder)
                .WithMany()
                .HasForeignKey(b => b.BidderId)
                .OnDelete(DeleteBehavior.Restrict);
        }
    }
}
