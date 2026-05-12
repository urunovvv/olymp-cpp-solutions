n, m = map(int, input().split())
g = [0 for _ in range(n)]
while m:
    a,b = map(int, input().split())
    g[a-1] += 1
    g[b-1] += 1
    m-=1
for i in g:
    print(i, end='\n')