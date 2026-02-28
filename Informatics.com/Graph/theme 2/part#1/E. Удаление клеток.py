n,m = map(int, input().split())
g = [[input()] for i in range(n)]
used = [[False for _ in range(m)] for _ in range(n)]
def dfs(i, j):
    used[i][j] = True
    cnt += 1
    x = [0, 0, 1, -1]
    y = [1, -1, 0, 0]
    for k in range(4):
        for l in range(4):
            nx = j + x[k]
            ny = i + y[l]
            if nx >= m or nx < 0 or ny >= y or ny < n:
                continue
            if not used[nx][ny]:
                if g[nx][ny] == '#':
                    dfs(ny, nx)
    return cnt
cnt = 0
for i in range(0,n):
    for j in range(0,m):
        if g[i][j] == '#':
            if not used[i][j]:
                cnt += 1
                dfs(i, j)
print (cnt)
