a = [list(map(int, input().split())) for i in range(5)]
row, column = 1, 1
for i in range(0, 5):
    if 1 in a[i]:
        row = i
        column = a[i].index(1)
        break
steps = abs(2 - row) + abs(2 - column)
print (steps)