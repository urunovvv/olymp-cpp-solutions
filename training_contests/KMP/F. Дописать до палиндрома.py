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

s = input()
n = len(s)
tmp = s[::-1] + '#' + s
pi = prefix_function(tmp)
# print (pi)
# print (n - pi[-1])
if pi[-1] == n:
    print(0)
    print (s)
else:
    print (n - pi[-1])
    s = s[::-1]
    print(s[::-1] + s[pi[-1]:])