n = int(input())
a = sorted(list(map(int, input().split())))

count, last = 0, -1
for i in a:
    if last == -1:
        last = i
        count += 1
        continue
    if i - last >= 2:
        count += 1
        last = i

print(count)