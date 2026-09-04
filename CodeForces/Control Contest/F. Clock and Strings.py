for _ in range(int(input())):
    a, b, c, d = map(int, input().split())
    a, b = min(a, b), max(a, b)
    cnt = 0
    for i in range(a, b):
        if i == c or i == d:
            cnt += 1
    
    if cnt == 1:
        print("YES")
    else:
        print("NO")