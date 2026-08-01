n, m = map(int, input().split())
if m < n: n, m = m, n # now N keeps minimal value
ans = m // 2 * n + n // 2 * (m % 2)
print (ans)