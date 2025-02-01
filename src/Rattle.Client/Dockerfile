# 1) Build with .NET SDK
FROM mcr.microsoft.com/dotnet/sdk:8.0 AS build
WORKDIR /app

COPY src/Rattle.Client/Rattle.Client.csproj ./
RUN dotnet restore Rattle.Client.csproj

COPY src/Rattle.Client/ ./
RUN dotnet publish Rattle.Client.csproj -c Release -o /app/out

# 2) Run on Nginx (static site)
FROM nginx:alpine AS final
WORKDIR /usr/share/nginx/html

COPY --from=build /app/out/wwwroot .
EXPOSE 80
CMD ["nginx", "-g", "daemon off;"]
