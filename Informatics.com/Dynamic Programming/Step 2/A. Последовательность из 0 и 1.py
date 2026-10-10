n = int(input())
a, b = 2, 3
if n == 1:
    print (a)
elif n == 2:
    print (b)
else:
    for i in range(2, n):
        a, b = b, a + b
    print(b)