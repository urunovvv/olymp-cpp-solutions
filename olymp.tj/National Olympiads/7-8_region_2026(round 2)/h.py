n = int(input())
v = []
k = 0
cur = 1
while n >= cur:
    v.append(cur)
    n -= cur
    cur += 1
    k += 1
v[k-1] += n
v.sort(reverse=True)
print(k)
print(*v)
