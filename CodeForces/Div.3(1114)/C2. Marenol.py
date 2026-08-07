res = []
for _ in range(int(input())):
    n = int(input())
    a = input()
    b = input()
    a1 = [i for i in range(0, n, 2) if a[i] == '1']
    b1 = [i for i in range(0, n, 2) if b[i] == '1']
    a2 = [i for i in range(1, n, 2) if a[i] == '1']
    b2 = [i for i in range(1, n, 2) if b[i] == '1']
    if len(a1) != len(b1) or len(a2) != len(b2):
        res.append(-1)
    else:
        ans = 0
        for i in range(len(a1)):
            ans += abs(a1[i] - b1[i]) // 2
        for i in range(len(a2)):
            ans += abs(a2[i] - b2[i]) // 2
        res.append(ans)
#kimpintyao
print(*res, sep="\n")