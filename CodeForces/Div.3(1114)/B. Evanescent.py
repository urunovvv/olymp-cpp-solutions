res = []

for _ in range(int(input())):
    n = int(input())
    s = input().strip()
    c = 1
    for i in range(1, n):
        if s[i] != s[i - 1]:
            c += 1   
    ans = c
    for i in range(1, n - 1):
        if s[i - 1] == s[i + 1]:
            if s[i] != s[i - 1]:
                ans = min(ans, c - 2)
        elif s[i - 1] != s[i] and s[i] != s[i + 1]:
            ans = min(ans, c - 1)
    res.append(ans)

print(*res, sep="\n")