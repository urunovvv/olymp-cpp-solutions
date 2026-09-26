n = int(input())

a = [1 for i in range(11)]
b = [0 for i in range(11)]

a[0] = a[5] = a[8] = 0

frm = [[4, 6], [6, 8], [7, 9], [4, 8], [0, 3, 9], [], [0, 1, 7], [2, 6], [1, 3], [2, 4]]

dp = [[0] * 10] * (n + 1)
dp[1] = [1 for i in range(10)]
dp[1][0] = dp[1][8] = dp[1][5] = 0
for i in range(2, n+1):
    for j in range(10):
        for _ in frm[j]:
            dp[i][_] += dp[i-1][j]

print(sum(dp[n]) if n != 1 else 10)
