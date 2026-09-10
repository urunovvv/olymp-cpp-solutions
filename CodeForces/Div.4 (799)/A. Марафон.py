for _ in range(int(input())):
    a = list(map(int, input().split()))
    print(int(a[0] < a[1]) + int(a[0] < a[2]) + int(a[0] < a[3]))