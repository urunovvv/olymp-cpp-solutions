import sys
input = sys.stdin.readline()
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    dp = [1] * n
    for i in range(n - 1, -1, -1):
        mx = 1
        for j in range(i + 1, n):
            if a[j] > a[i]:
                mx = max(mx, 1 + dp[j])
        dp[i] = mx
    L = max(dp)
    ans = []
    idx = -1
    need = L 
    last = None
    while need > 0:
        val = -1
        pos = -1
        for pos in range(idx + 1, n):
            if last is not None and a[pos] <= last:
                continue
            if dp[pos] < need:
                continue
            if dp[pos] == need and a[pos] > val:
                val = a[pos]
                pos = pos

        ans.append( val)
        idx = pos
        last = val
        need -= 1

    print(L)
    print(*ans)

solve()