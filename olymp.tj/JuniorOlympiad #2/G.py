import sys
from collections import deque

# input = sys.stdin.readline
n, m = map(int, input().split())
v = [[] for _ in range(n + 1)]
in_pow = [0] * (n + 1)

for _ in range(m):
    u, vv = map(int, input().split())
    v[u].append(vv)
    in_pow[vv] += 1

cnt = 0
q = deque()
for i in range(1, n + 1):
    if in_pow[i] == 0:
        q.append(i)

while q:
    u = q.popleft()
    cnt += 1
    for vv in v[u]:
        in_pow[vv] -= 1
        if in_pow[vv] == 0:
            q.append(vv)

print("YES" if cnt == n else "NO")