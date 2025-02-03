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
            modelBuilder.Entity<User>(entity =>
            {
                entity.HasKey(u => u.UserId);
                entity.Property(u => u.Username).IsRequired();
                entity.Property(u => u.Email).IsRequired();
                entity.Property(u => u.PasswordHash).IsRequired();
            });

            // AuctionItem
            modelBuilder.Entity<AuctionItem>(entity =>
            {
                entity.HasKey(a => a.AuctionItemId);
                entity.HasOne(a => a.Owner)
                      .WithMany()
                      .HasForeignKey(a => a.OwnerId)
                      .OnDelete(DeleteBehavior.Restrict);
            });

            // Bid
            modelBuilder.Entity<Bid>(entity =>
            {
                entity.HasKey(b => b.BidId);
                entity.HasOne(b => b.AuctionItem)
                      .WithMany(a => a.Bids)
                      .HasForeignKey(b => b.AuctionItemId)
                      .OnDelete(DeleteBehavior.Cascade);
                entity.HasOne(b => b.Bidder)
                      .WithMany()
                      .HasForeignKey(b => b.BidderId)
                      .OnDelete(DeleteBehavior.Restrict);
            });
        }
    }
}
