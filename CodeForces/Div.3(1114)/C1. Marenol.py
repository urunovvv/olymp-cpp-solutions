res = []
for _ in range(int(input())):
    n = int(input())
    a = input()
    b = input()
    cntA1 = a[::2].count('1')
    cntB1 = b[::2].count('1')
    cntA0 = a[1::2].count('0')
    cntB0 = b[1::2].count('0')
    if cntA1 == cntB1 and cntA0 == cntB0:
        res.append("YES")
    else:
        res.append("NO")
print(*res, sep="\n")