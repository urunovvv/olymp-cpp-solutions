for _ in range(int(input())):
    a = sorted(list(map(int, input().split())))
    if a[0] == a[1] or a[1] == a[2] :
        print(0)
        continue
    print (min(abs(a[0]-a[1]), abs(a[1]-a[2])))