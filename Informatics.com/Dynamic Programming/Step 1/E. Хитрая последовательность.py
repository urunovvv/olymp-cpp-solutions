n = int(input())
dp = [0] * (4 * n + 20)
dp[0] = dp[1] = 1
dp[2] = 2
for i in range(2, n + 4):
    dp[2 * i] = dp[i] + 1
    dp[2 * i + 2] = dp[2 * n + 1] - dp[i]
print (dp[n]) 
# print (dp)