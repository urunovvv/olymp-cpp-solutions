n, m = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(n)]
dp = [[0] * m for _ in range(n)]
dp[0][0] = a[0][0]
for i in range(1, n):
    dp[i][0] = dp[i - 1][0] + a[i][0]
for j in range(1, m):
    dp[0][j] = dp[0][j - 1] + a[0][j]
for i in range(1, n):
    for j in range(1, m):
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j]
# print (dp, sep="\n")
print(dp[-1][-1])
path = ""
i, j = n - 1, m - 1
while i != 0 or j != 0:
    # print (dp[i][j], end=" ")
    if i == 0 and j > 0:
        path += "R"
        j -= 1
        continue
    elif j == 0 and i > 0:
        path += "D"
        i -= 1
        continue
    if dp[i - 1][j] > dp[i][j - 1]:
        path += "D"
        i -= 1
    else:
        path += "R"
        j -= 1
print("\n" + path[::-1])