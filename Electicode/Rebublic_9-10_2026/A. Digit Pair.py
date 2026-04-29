# Your code here
t = int(input())
for _ in range(t):
    a, b, c = map(int, input().split())
    if a+b>9 or a+c>9 or b+c>9:
        print("YES")
    else:
        print("NO")