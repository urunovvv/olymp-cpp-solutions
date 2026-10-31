def prefix_function(s: str) -> list:
    n = len(s)
    pi = [0 for _ in range(n)]
    for i in range(1, n):
        j = pi[i - 1]
        while j > 0 and s[i] != s[j]:
            j = pi[j - 1]
        if s[i] == s[j]:
            j += 1
        pi[i] = j
    return pi

def kmp_entries(text: str, pattern: str) -> list:
    n, m, entries, j, pi = len(text), len(pattern), [], 0, prefix_function(pattern)
    for i in range(n):
        while j > 0 and text[i] != pattern[j]:
            j = pi[j - 1]
        if text[i] == pattern[j]:
            j += 1
        if j == m:
            return i
    return n // 2 - 2

a = input()
b = input()
n = len(a)
a += a
if b in a:
    print(kmp_entries(a, b) - n + 1) 
else:
    print(-1)