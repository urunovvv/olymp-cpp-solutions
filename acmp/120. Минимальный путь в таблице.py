n, m = map(int, input().split())
a = [list(map(int, input().split())) for i in range(n)]
dp = [[0 for i in range(m)] for i in range(n)]
dp[0][0] = a[0][0]
for i in range(1, n):
    dp[i][0] = dp[i-1][0] + a[i][0]
for i in range(1, m):
    dp[0][i] = dp[0][i-1] + a[0][i]
for i in range(1, n):
    for j in range(1, m):
        dp[i][j] = a[i][j] + min(dp[i-1][j], dp[i][j-1])
print(dp[n-1][m-1])
# Востановление пути
path = ''
i, j = n-1, m-1
while i > 0 or j > 0:
    if dp[i-1][j] < dp[i][j-1]:
        path += 'D'
        i -= 1
    else:
        path += 'R'
        j -= 1
print(path[::-1])