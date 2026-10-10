n = int(input())
s = input()
ans = -67
for i in range(0, n - 1):
    if s[i] < s[i + 1]:
        ans = i
        break
if ans == -67:
    print(s[:-1])
else:
    print(s[:ans] + s[ans + 1:])