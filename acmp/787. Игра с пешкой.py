with open('INPUT.txt', 'r') as file_in:
    n = int(file_in.readline().strip())
    a = list(map(int, file_in.readline().split()))
    file_in.close()

f = not True 
dp = [[0] * n] * n
for i in range(n):
    dp[i][i] = a[i]
for i in range(n - 2, -1, -1):
    for j in range(n - 1 - i, -i, -1):
        if i == j:
            continue
        if f:
            dp[j][j] = max(dp[j-1][j], dp[j][j+1])
        else:
            dp[j][j] = min(dp[j-1][j], dp[j][j+1])
    f = not f
#print (dp[0][0])
print(*dp, sep='\n')
