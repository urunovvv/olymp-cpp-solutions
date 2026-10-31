def prefix_funtion(s: str) -> list:
    n = len(s)
    pi = [0 for i in range(n)]
    for i in range(1, n):
        j = pi[i - 1]
        while j > 0 and s[i] != s[j]:
            j = pi[j - 1]
        if s[i] == s[j]:
            j += 1
        pi[i] = j
    return pi

def kmp(text: str, pattern: str) -> int:
    n, m, pi, j = len(text), len(pattern), prefix_funtion(pattern), 0
    for i in range(n):
        while j > 0 and text[i] != pattern[j]:
            j = pi[j - 1]
        if text[i] == pattern[j]:
            j += 1
        if j == m:
            return i - j + 1
    return -1

s = input()
n = len(s)
pi = prefix_funtion(s)
pl = [] # patterns' lengths
i = -1
while pi[i] > 0:
    pl.append(n - pi[i])
    i = pi[i - 1]

ans = s + s

for i in pl:
    if i * (n // i + (n % i != 0)) > len(ans):
        continue
    t = s[:i] * (n // i + (n % i != 0))
    ans = t if len(t) < len(ans) else ans
print (len(ans) - n)
print (ans)