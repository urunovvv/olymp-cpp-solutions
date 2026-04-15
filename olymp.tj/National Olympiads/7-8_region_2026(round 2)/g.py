n,a,b,c,d = map(int, input().split())
s = a+b+c+d
if s <= n*3:
    print(0)
else:
    print(max(0, s - n*3))
