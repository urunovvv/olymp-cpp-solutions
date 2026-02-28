def solve():
    n = int(input())
    s = input()
    if n % 2 != 0:
        print("NO")
        return
    dp = [[False] * (n + 1) for _ in range(n + 1)]
    for i in range(n + 1):
        dp[i][i] = True
    for h in range(2, n + 1, 2):
        for i in range(n - h + 1):
            j = i + h
            for k in range(i + 1, j, 2):
                if s[i] == s[k]:
                    if dp[i + 1][k] and dp[k + 1][j]:
                        dp[i][j] = True
                        break
    if dp[0][n]:
        print("YES")
    else:
        print("NO")

t = int(input())
for _ in range(t):
    solve()
