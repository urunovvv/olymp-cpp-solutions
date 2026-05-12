n = int(input())
a = list(map(int, input().split()))
a = [0] + a
# print(a)
dp = [0] * (n + 3)
dp[0], dp[1] = a[0], a[1]
for i in range(2, n + 1):
    if a[i] <= 0:
        continue
    dp[i] = max(dp[i - 1], dp[i - 2] + a[i])
print(dp[n])