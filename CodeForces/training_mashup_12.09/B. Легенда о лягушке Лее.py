for _ in range(int(input())):
    x, y, k = map(int, input().split())
    X = (x + k - 1) // k
    Y = (y + k - 1) // k
    print(max(2 * Y - 1, 2 * Y))