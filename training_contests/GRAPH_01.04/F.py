n,m = map(int, input().split())
used = [False for x in range(n+1)]
g = [[]] * (n+1)
f = []*(10**5)
t_in = [] * (n+1)
global time
time = 1
cnt = 0
def dfs(frm, v):
    used[v] = True
    t_in[v] = time
    time += 1
    f[v] = t_in[v]
    for to in g[v]:
        if to == frm:
            continue
        elif used[to]:
            f[v] = min(f[v], t_in[to])
        else:
            dfs(v, to)
            f[v] = min(f[v], t_in[to])
            if t_in[v] < f[to]:
                cnt+=1
    return cnt
for i in range(m):
    a,b = map(int, input().split())
    g[a].append(b)
    g[b].append(a)
count = 0
for i in range(1, n+1):
    if not used[i]:
        count += (dfs(i, i))
#print (count)
print (m - count)