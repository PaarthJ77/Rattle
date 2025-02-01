namespace Rattle.Core.Entities
{
    public class User
    {
        public int UserId { get; set; }
        public string Username { get; set; } = default!;
        public string Email { get; set; } = default!;
        public string PasswordHash { get; set; } = default!;
        public bool IsAdmin { get; set; }
    }
}
