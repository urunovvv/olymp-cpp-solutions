s = input()
cnt = 0
for c in s:
    if c.isupper():
        cnt += 1

if cnt == len(s) or (cnt == len(s)-1 and s[0].islower()):
    new_s = ''
    for c in s:
        if c.isupper():
            new_s += c.lower()
        else:
            new_s += c.upper()
    s = new_s

print(s)
