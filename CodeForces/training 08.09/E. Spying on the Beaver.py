for _ in range(int(input())):
    n = int(input())
    p = list(map(int, input().split()))
    m = int(input())
    a = sorted(list(map(int, input().split())))
    print(m-1, *a[-1:0:-1])
    