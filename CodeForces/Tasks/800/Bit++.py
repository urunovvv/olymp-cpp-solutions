x = 0
for _ in range(int(input())):
    operation = input().strip('X')
    x += 1 if operation == '++' else -1
print(x)