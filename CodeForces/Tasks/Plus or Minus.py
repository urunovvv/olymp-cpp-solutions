def solve():
    a,b,c = map(int, input().split())
    if a+b == c:
        print('+')
    else:
        print('-')

t = int(input())
for _ in range(t):
    solve()