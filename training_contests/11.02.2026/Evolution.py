n = int(input())
a = int(input())
b = int(input())
while a != b and a > 0 and b > 0:
    if a < b:
        b //= 2
    else:
        a //= 2
print(a)
