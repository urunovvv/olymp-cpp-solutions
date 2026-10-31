def prefix_function(s: str) -> list:
    n = len(s)
    pi = [0 for i in range(n)]
    for i in range(1, n):
        j = pi[i - 1]
        while j > 0 and s[j] != s[i]:
            j = pi[j - 1]
        if s[j] == s[i]:
            j += 1
        pi[i] = j
    return pi

def kmp_search(source: str, pattern: str) -> list:
    pi = prefix_function(pattern)
    n, m = len(source), len(pattern)
    j, entries = 0, []
    for i in range(0, n):
        while j > 0 and source[i] != pattern[j]:
            j = pi[j - 1]
        if source[i] == pattern[j]:
            j += 1
        if j == m:
            entries.append(i - j + 1)
            j = pi[j - 1]
    return entries

a = input()
b = input()
print(*kmp_search(a, b))