def prefix_func(s: str) -> list:
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

def kmp(source: str, pattern: str) -> list:
    pi = prefix_func(pattern)
    entries = []
    j = 0 # указатель в префиксном массиве, который 
          # показывает сколько элементов совпадают с щаблоном
    n, m = len(source), len(pattern)
    for i in range(n - 1):
        while j > 0 and source[i] != pattern[j]:
            j = pi[j - 1]
        if source[i] == pattern[j]:
            j += 1
        if j == m:
            return True
            # entries.append(i - j + 1)
            j = pi[j - 1]
    return False

def kmp_search(source: str, pattern: str) -> list:
    pi = prefix_func(pattern)
    entries = []
    j = 0 # указатель в префиксном массиве, который 
          # показывает сколько элементов совпадают с щаблоном
    n, m = len(source), len(pattern)
    for i in range(n - 1):
        while j > 0 and source[i] != pattern[j]:
            j = pi[j - 1]
        if source[i] == pattern[j]:
            j += 1
        if j == m:
            return i - j + 1
            # entries.append(i - j + 1)
            j = pi[j - 1]
    return -1
    # return entries

a = input()
b = input()
n = len(a)
a += a
print ((n - kmp_search(a, b)) % n if kmp(a, b) else -1)
# entries = kmp_search(a, b)