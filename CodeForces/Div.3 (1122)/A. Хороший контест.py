for _ in range(int(input())):
    n = int(input())
    a, b, c = map(int, input().split())
    print (n - min(a, min(b, c)))
