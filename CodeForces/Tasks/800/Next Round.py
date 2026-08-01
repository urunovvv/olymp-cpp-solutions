n, k = map(int, input().split())
a = list(map(int, input().split()))
ans, i, k = 0, 0, k - 1
while i < n and a[i] > 0 and a[i] >= a[k]:
    ans += 1
    i += 1
print (f'{ans}')