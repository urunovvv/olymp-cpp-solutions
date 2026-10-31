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


text = input()
pi = prefix_function(text)
# print(pi)
ans = []
i = pi[-1]
while i > 0:
    # print(i)
    ans.append(i)
    i = pi[i - 1]
if ans == [0]:
    print(0)
    print() 
else:
    print(len(ans))
    print(*sorted(ans))