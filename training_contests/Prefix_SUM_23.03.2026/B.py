import sys
input = sys.stdin.readline
s = input().strip()
n = len(s) 
res = ''
pref = [[0] * (n + 1) for _ in range(27)]
for i in range(n):
    for j in range(1, 27):
        pref[j][i + 1] = pref[j][i]
    pref[ord(s[i]) - ord('a') + 1][i + 1] += 1
q = int(input())
for _ in range(q):
    l, r = map(int, input().split())
    idx = 0
    mx = 'a'
    for i in range(27):
        if chr(ord('a') + i) > mx and pref[i][r] - pref[i][l - 1] >= pref[idx][r] - pref[idx][l - 1]:
            idx = i
            mx = chr(ord('a') + i)
    res += chr(ord(mx) - 1)
    res += '\n'
sys.stdout.write(res)