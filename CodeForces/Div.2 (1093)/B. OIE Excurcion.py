t = int(input())
ans = ""
for _ in range(t):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    d = {}
    for i in range(n):
        x = (-a[i] - (i + 1)) % m
        d[x] = 1
    if len(d) < m:
        ans += "YES\n"
    else:
        ans += "NO\n"
print(ans)