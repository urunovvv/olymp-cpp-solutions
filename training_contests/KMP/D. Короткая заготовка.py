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
pi = prefix_function(s)
if n % (n - pi[-1]) == 0:
    print (n - pi[-1]) 
    print (n // (n - pi[-1]))
else:
    print (n)
    print (1)