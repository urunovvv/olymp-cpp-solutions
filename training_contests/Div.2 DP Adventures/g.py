def max_loot(a):    
    n = len(a)    
    if n == 0:        
        return 0    
    if n == 1:        
        return a[0]    
    dp = [0] * n    
    dp[0] = a[0]    
    dp[1] = max(a[0], a[1])    
    for i in range(2, n):        
        dp[i] = max(dp[i-1], dp[i-2] + a[i])    
    return dp[n-1]
n = int(input())
a = list(map(int, input().split()))
print(max_loot(a))