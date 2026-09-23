n = int(input())
a, b = 1, 1
c = 0
for i in range(2, n+1):
    c = a + b
    a, b = b, c
print (a)
