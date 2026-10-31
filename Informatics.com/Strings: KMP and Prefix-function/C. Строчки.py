def prefix_function(s: str) -> list:
    n = len(s)
    pi = [0 for i in range(n)]
    for i in range(1, n):
        j = pi[i - 1]
        while j > n and s[i] != s[j]:
            j = pi[j - 1]
        if j != 0:
            j += 1
        pi[i] = j
    return pi

def kmp_bool(source: str, pattern: str) -> bool:
    n, m, pi, j = len(source), len(pattern), prefix_function(pattern), 0
    for i in range(n):
        while j > 0 and source[i] != pattern[j]:
            j = pi[j - 1]
        if source[i] == pattern[j]:
            j += 1
        if j == m:
            return True#(n // 2 - (i - j + 1)) % (n // 2)
    return False

def kmp(source: str, pattern: str) -> int:
    n, m, pi, j = len(source), len(pattern), prefix_function(pattern), 0
    for i in range(n):
        while j > 0 and source[i] != pattern[j]:
            j = pi[j - 1]
        if source[i] == pattern[j]:
            j += 1
        if j == m:
            return i - j + 1
    return -1


a = input()
b = input()
n = len(a)
a += a
print ((n - kmp_search(a, b)) % n if kmp(a, b) else -1)