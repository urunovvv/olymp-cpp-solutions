# import sys
# sys.setrecursionlimit(2**70)

n, m = map(int, input().split())
used = [False] * (n + 1)
g = [[] for _ in range(n + 1)]
f = [0] * (n + 10)
t_in = [0] * (n + 10)
tt = [1]
bridges = []
stack = []
def dfs(start_v):
    global tt, stack
    stack.append((start_v, -1, -1, 0))
    while stack != []:
        v, p, p_id, idx = stack[-1]
        if idx == 0 and not used[v]:
            used[v] = True
            t_in[v] = tt[0]
            f[v] = tt[0]
            tt[0] += 1
        if idx < len(g[v]):
            to, edge_id = g[v][idx]
            stack[-1] = (v, p, p_id, idx + 1)
            if edge_id == p_id:
                continue
            if used[to]:
                f[v] = min(f[v], t_in[to])
            else:
                stack.append((to, v, edge_id, 0))
        else:
            stack.pop()
            if p != -1:
                f[p] = min(f[p], f[v])
                if t_in[p] < f[v]:
                    bridges.append(p_id)
for i in range(1, m + 1):
    a, b = map(int, input().split())
    g[a].append((b, i))
    g[b].append((a, i))

for i in range(1, n + 1):
    if not used[i]:
        dfs(i)

bridges.sort()
print(len(bridges))
if bridges != []:
    print(*bridges, sep='\n')
