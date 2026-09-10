s = input()
s = s.lower()
vowel = ['a', 'e', 'i', 'o', 'u', 'y']
for i in s:
    if i in vowel:
        continue
    else:
        print('.' + i[0], end='')