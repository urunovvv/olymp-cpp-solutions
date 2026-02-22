n = int(input())
g = [[] for _ in range(n)]
for i in range(1,n+1):
    s = input()
    if s=="":
        continue
    a = [int(x) for x in s.split()]
    for j in a:
        g[j-1].append(i)
for _ in g:
    print(*sorted(_))