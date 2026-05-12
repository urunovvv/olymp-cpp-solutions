n = int(input())
m = [list(map(int, input().split())) for _ in range(n)]
m.sort()
for _ in m:
    print(*_)
