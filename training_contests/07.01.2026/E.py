def solve():
    n = int(input())
    positive = 0
    negative = 0
    idx = 0
    posidx=[]
    negidx=[]
    z=[]
    a = list(map(int, input().split()))
    for i in range(n):
        if a[i] > 0:
            positive += a[i]
            posidx.append(i+1);
        elif a[i] < 0:
            negative += a[i]
            negidx.append(i+1)
        else:
            z.append(i+1)
    if len(z)==n:
        print (n)
        for _ in z:
            print(_, end=' ')
        return
    if abs(positive) > abs(negative):
        print (len(posidx))
        for _ in posidx:
            print(_, end=' ')
    else:
        print (len(negidx))
        for _ in negidx:
            print(_, end=' ')
solve()
