a = []
for i in range(int(input())):
    a.append(int(input()))
a.sort()
x = 1
for i in a:
    if i > x:
        print(x)
        exit()
    x += i
print(x)