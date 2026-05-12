n = int(input())
dp = [1 for i in range(n+3)]
dp[1] = 3
for i in range(2, n+2):
    dp[i] = dp[i-1] * 2
print (dp[n])