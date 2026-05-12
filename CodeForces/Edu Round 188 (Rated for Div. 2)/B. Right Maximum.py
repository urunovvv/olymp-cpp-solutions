import sys

input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    mx = 0
    ans = 0
    for x in a:
        if x >= mx:
            ans += 1
            mx = x
    print(ans)