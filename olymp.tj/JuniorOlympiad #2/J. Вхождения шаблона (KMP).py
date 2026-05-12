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

# def kmp_search(source, target):
#     pi = prefix_function(target)
#     j = 0
#     for i in range(len(source)):
#         while j > 0 and source[i] != target[j]:
#             j = pi[j - 1]
#         if source[i] == target[j]:
#             j += 1
#         if j == len(target):
#             return i - len(target) + 1
#     return -1

# print(kmp_search('ababcbabca', 'abca'))  

# def prefix_function(s: str) -> list:
#     n = len(s)
#     pi = [0] * n
#     for i in range(1, n):
#         j = pi[i - 1]
#         while j > 0 and s[i] != s[j]:
#             j = pi[j - 1]
#         if [i] == s[j]:
#             j += 1
#         pi[i] = j
#     return pi

def kmp_search(s, pattern) -> list:
    pi = prefix_function(pattern)
    j = 0
    entries = []
    for i in range(len(s)):
        while j > 0 and s[i] != pattern[j]:
            j = pi[j - 1]
        if s[i] == pattern[j]:
            j += 1
        if j == len(pattern):
            entries.append(i - len(pattern) + 1)
            j = pi[j - 1]
    return entries

def main():
    source = input()
    pattern = input()
    print(len(kmp_search(source, pattern)))

if __name__ == "__main__":
    main()