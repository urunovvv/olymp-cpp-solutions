words = list(map(str, input().split(',')))
s_words = sorted([sorted(word) for word in words])
res = []
for i in range(len(s_words) - 1):
    if s_words[i] == s_words[i + 1]:
        res.append(s_words[i])
if res:
    print(res)
else:
    print('No anagrams found')