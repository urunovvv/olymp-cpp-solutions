for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    z = a.count(0)
    print (-1 if z < 2 else int(a[0] != 0) + int(a[-1] != 0))