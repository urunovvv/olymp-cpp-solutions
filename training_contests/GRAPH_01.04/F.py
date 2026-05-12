n, m = map(int, input().split())
used = [False] * (n + 1)
g = [[] for _ in range(n + 1)]
t_in = [0] * (n + 1)
low = [0] * (n + 1)
time = [1]  # use list to pass by reference
bridges = 0

def dfs(u, parent):
    global bridges
    used[u] = True
    t_in[u] = time[0]
    low[u] = time[0]
    time[0] += 1
    
    for v in g[u]:
        if v == parent:
            continue
        elif used[v]:
            # back edge
            low[u] = min(low[u], t_in[v])
        else:
            # tree edge
            dfs(v, u)
            low[u] = min(low[u], low[v])
            # check if edge (u, v) is a bridge
            if low[v] > t_in[u]:
                bridges += 1

for i in range(m):
    a, b = map(int, input().split())
    g[a].append(b)
    g[b].append(a)

for i in range(1, n + 1):
    if not used[i]:
        dfs(i, -1)

print(bridges)