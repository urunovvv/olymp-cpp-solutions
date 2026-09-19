n, t = map(int, input().split())
a = list(map(int, input().split()))
l = 0
cur = 0
mx = 0
for r in range(n):
    cur += a[r]
    while cur > t:
        cur -= a[l]
        l += 1
    mx = max(mx, r - l + 1)
print(mx)