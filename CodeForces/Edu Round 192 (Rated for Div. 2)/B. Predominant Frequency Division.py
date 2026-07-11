out = []
for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    S1 = [0] * n
    S2 = [0] * n
    curr1 = 0
    curr2 = 0
    for i in range(n):
        if a[i] == 1:
            curr1 += 1
            curr2 += 1
        elif a[i] == 2:
            curr1 -= 1
            curr2 += 1
        else:
            curr1 -= 1
            curr2 -= 1
            
        S1[i] = curr1
        S2[i] = curr2
    max_s2 = [0] * n
    max_s2[n-2] = S2[n-2] 
    
    for i in range(n-3, -1, -1):
        max_s2[i] = max(S2[i], max_s2[i+1])
    possible = False
    for i in range(n-2):
        if S1[i] >= 0:
            if max_s2[i+1] >= S2[i]:
                possible = True
                break
                
    out.append("YES\n" if possible else "NO\n")
print(*out)