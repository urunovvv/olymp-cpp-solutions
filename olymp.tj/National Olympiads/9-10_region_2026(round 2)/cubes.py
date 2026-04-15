a,b,c = map(int, input().split())
v = a*b*c
s = ((a*b)+(b*c)+(a*c)) * 2
print (v, v*6-s)
