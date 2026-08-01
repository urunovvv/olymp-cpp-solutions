ans = 0
for _ in range(int(input())): a = input().split(); ans += a.count('1') * (a.count('1') >= 2)
print(ans)