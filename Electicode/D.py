n = int(input())
a = list(map(int, input().split()))
b = []


#creating b
for i in range (n):
    b.append(a[i])
    l = len(b) - 1
    b = b + b[:len(b)]
print (b)
#request processing
q = int(input())
res = []
for i in range (q):
    l,r = map(int, input().split())
    res.append(sum(b[l-1:r]))

#output
for _ in res:
    print (_, end = '\n')