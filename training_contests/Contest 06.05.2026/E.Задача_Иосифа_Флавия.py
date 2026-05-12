n, k = map(int, input().split())
a = [i for i in range(1, n+1)]
k-=1
nn = n
while n-1>1:
    if (a[k]!=0):
        a[k%nn] = 0
    else:
