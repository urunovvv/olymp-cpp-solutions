for i in range(int(input())):
    a, b, c = map(int, input().split())
    print (max(abs(a - b), abs(a + c - b)))
