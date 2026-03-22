def isdigit(s):
    b = True
    res = []
    point, minus = 0, 0
    for c in s:
        if c == '.':
            point += 1
        elif c == '-':
            minus += 1
        elif not ('0' <= c <= '9'):
            b = False
            break
    if point > 1 or minus > 1:
        b = False
    b_point = False
    if point == 1:
        b_point = True
    res = [b, b_point]
    return res

a = input().strip()
b = input().strip()
if isdigit(a)[0] and isdigit(b)[0]:
    if (isdigit(a)[1] == 1 or isdigit(b)[1] == 1):
        print(float(a) + float(b))
    else:
        print(int(a) + round(int(b)))
else:
    print(a + b)