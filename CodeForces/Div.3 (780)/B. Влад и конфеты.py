for _ in range(int(input())):
    n = int(input())
    a = sorted(list(map(int, input().split())))
    if n == 1:
        print("YES" if a[0] == 1 else "NO")
        continue
    ans = "YES"
    cnt = 0
    for i in range(1, n):
        if a[i] - a[i - 1] > 1:
            cnt += 1
    # ans = "NO" if cnt > 1
    print(ans)
