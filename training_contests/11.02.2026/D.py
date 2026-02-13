n = int(input())
a = int(input())
b = int(input())
while b != a:
    if b%2:
        b = (b-1) // 2
    else:
        b //= 2
    
    if a%2:
        a = (a-1) // 2
    else:
        a //= 2
print(a)