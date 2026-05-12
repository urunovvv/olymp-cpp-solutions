from math import sqrt
a,b = map(int, input().split())
if sqrt(a*b) == int(sqrt(a*b)):
    print (int(sqrt(a*b)))
else:
    print (0)
