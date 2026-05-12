def solve(n, a):   
    dp = [0] * n    
    dp[0] = 0    
    for i in range(1, n):        
        cost1 = dp[i-1] + abs(a[i-1] - a[i])        
        if i > 1:            
            cost2 = dp[i-2] + abs(a[i-2] - a[i])            
            dp[i] = min(cost1, cost2)        
        else:           
            dp[i] = cost1    
    return dp[n-1]
n = int(input())
a = list(map(int, input().split()))
result = solve(n, a)
print(result) 