n = int(input())
dp = [0] * (n + 2)
dp[0], dp[1], dp[2] = 0, 2, 4
for i in range(2, n+2):
    dp[i] = dp[i-1] + i
print (dp[n])