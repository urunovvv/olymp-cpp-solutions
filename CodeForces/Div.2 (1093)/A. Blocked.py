t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    cnt = dict()
    ok = True
    for x in a:
        if x in cnt:
            print(-1)
            ok = False
            break
        else:
            cnt[x] = 1
    if not ok:
        continue
    a.sort()
    print(*a[::-1])