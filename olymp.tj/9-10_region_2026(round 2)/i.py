n,m,h = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
a.sort(reverse=True)
b.sort(reverse=True)
#a = a[::-1]
#b = b[::-1]
cnt = 0
for i in range(min(len(a), len(b))):
    cnt += min(a[i], b[i]*h)
print(f'{cnt}')
