ans = []
for _ in range(int(input())):
    n = int(input())
    c = list(map(int, input().split()))
    if n==1 and c[0] >=3:
        ans.append('YES\n')
        continue
    k = 0
    b = bool()
    for i in c:
        if i > 2: 
            ans.append('YES\n')
            b = True
            break
        elif i == 2: k+=1
        if b: continue
    ans.append('YES\n' if k>=2 else 'NO\n')
print(*ans)