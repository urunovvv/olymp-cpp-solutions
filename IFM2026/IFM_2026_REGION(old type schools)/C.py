w, h, n = map(int, input().split())
l, r = 0, max(w, h) * n
while l < r:
    mid = (l + r) // 2
    if mid // w * (mid // h) >= n:
        r = mid
    else:
        l = mid
print(l + 1)
