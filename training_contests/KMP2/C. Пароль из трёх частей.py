
def prefix_function(s: str) -> list:
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

def main():
    s = input()
    n = len(s)
    pi = prefix_function(s)
    count = [0 for i in range(n + 1)]
    for i in pi:
        count[i] += 1
    for i in range(n - 1, 0, -1):
        count[pi[i - 1]] += count[i]
    for i in range(n + 1):
        count[i] += 1
    id = pi[-1]
    while id > 0 and count[id] < 3:
        id = pi[id - 1]
    if id == 0:
        print(-1)
    else:
        print(s[:id])

if __name__ == "__main__":
    main()
