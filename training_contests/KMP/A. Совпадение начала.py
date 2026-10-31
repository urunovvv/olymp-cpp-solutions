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

print(*prefix_function(input()))