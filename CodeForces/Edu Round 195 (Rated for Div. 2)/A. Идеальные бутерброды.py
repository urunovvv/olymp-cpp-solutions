for _ in range(int(input())):
    a, b = map(int, input().split())
    if a <= b:
        print(-1)
    else:
        if a >= 2 * b:
            print(b)
        else:
            print(min(b, a - b))