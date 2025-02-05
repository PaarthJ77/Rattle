using Microsoft.AspNetCore.Components.Authorization;
using Microsoft.JSInterop;
using System.Security.Claims;
using System.Threading.Tasks;

public class CustomAuthStateProvider : AuthenticationStateProvider
{
    private readonly IJSRuntime _jsRuntime;
    private ClaimsPrincipal _user = new ClaimsPrincipal(new ClaimsIdentity());

    public CustomAuthStateProvider(IJSRuntime jsRuntime)
    {
        _jsRuntime = jsRuntime;
    }

    public override async Task<AuthenticationState> GetAuthenticationStateAsync()
    {
        var username = await _jsRuntime.InvokeAsync<string>("localStorage.getItem", "username");

        if (!string.IsNullOrEmpty(username))
        {
            var identity = new ClaimsIdentity(new[]
            {
                new Claim(ClaimTypes.Name, username)
            }, "apiauth_type");

            _user = new ClaimsPrincipal(identity);
        }
        else
        {
            _user = new ClaimsPrincipal(new ClaimsIdentity());
        }

        return new AuthenticationState(_user);
    }

    public async Task MarkUserAsAuthenticated(string username)
    {
        var identity = new ClaimsIdentity(new[]
        {
            new Claim(ClaimTypes.Name, username)
        }, "apiauth_type");

        _user = new ClaimsPrincipal(identity);

        await _jsRuntime.InvokeVoidAsync("localStorage.setItem", "username", username);

        NotifyAuthenticationStateChanged(GetAuthenticationStateAsync());
    }

    public async Task MarkUserAsLoggedOut()
    {
        _user = new ClaimsPrincipal(new ClaimsIdentity());

        await _jsRuntime.InvokeVoidAsync("localStorage.removeItem", "username");

        NotifyAuthenticationStateChanged(GetAuthenticationStateAsync());
    }
}
