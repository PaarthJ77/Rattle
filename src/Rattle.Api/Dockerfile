# 1) Build Stage
FROM mcr.microsoft.com/dotnet/sdk:8.0 AS build
WORKDIR /app

# Copy only the Rattle.Api csproj first
COPY src/Rattle.Api/Rattle.Api.csproj ./

# Copy any other csproj files needed for restore
COPY src/Rattle.Core/Rattle.Core.csproj ../Rattle.Core/
COPY src/Rattle.Infrastructure/Rattle.Infrastructure.csproj ../Rattle.Infrastructure/

# Restore dependencies
RUN dotnet restore Rattle.Api.csproj

# Now copy the rest of the source code
COPY src/Rattle.Api/ ./
COPY src/Rattle.Core/ ../Rattle.Core/
COPY src/Rattle.Infrastructure/ ../Rattle.Infrastructure/

# Publish
RUN dotnet publish Rattle.Api.csproj -c Release -o /app/out

# 2) Runtime Stage
FROM mcr.microsoft.com/dotnet/aspnet:8.0 AS final
WORKDIR /app
COPY --from=build /app/out .
EXPOSE 80
ENTRYPOINT ["dotnet", "Rattle.Api.dll"]
