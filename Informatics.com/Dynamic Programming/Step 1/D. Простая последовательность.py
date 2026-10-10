n = int(input()) 
dp = [0] * (4 * n + 100)
dp[0] = dp[1] = 1
for i in range(1, n + 3):
    dp[2 * i] = dp[i] + dp[i - 1]
    dp[2 * i + 1] = dp[i] - dp[i - 1]
print(dp[n])

