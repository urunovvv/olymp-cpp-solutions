from math import sqrt
def dist(x1, y1, x2, y2):
    return sqrt((x1-x2)**2 + (y1+y2)**2)

x1, y1, x2, y2, x3, y3 = map(int, input().split())
a = dist(x1, y1, x2, y2)
b = dist(x1, y1, x3, y3)
c = dist(x3, y3, x2, y2)
p = (a+b+c)/2
ans = sqrt(p*(p-a)*(p-b)*(p-c))
print(ans)
