# Даны две строки. Если обе строки являются числом, то выведите их сумму, иначе выведите 
# конкатенацию этих строк. Числом считается строка, соблюдающая следующие условия: 
# она может быть преобразована в число типа int или float. 
# Число может содержать не более одного знака минус и не более одной десятичной точки.
# В случае, если обе строки являются числами, но хотя бы одна из них является числом с 
# плавающей точкой, то результатом будет число с плавающей точкой. Иначе результатом 
# будет целое число.

def isdigit(s):
    b = True
    point, minus = 0, 0
    for c in s:
        if c == '.':
            point += 1
        elif c == '-':
            minus += 1
        elif not ('0' <= c <= '9'):
            return False
    if point > 1 or minus > 1:
        return False
    b_point = False
    b_minus = False
    if point == 1:
        b_point = True
    if (minus == 1 and s[0] == '-'):
        b_minus = True
    else:
        return False
    b = (b_minus or b_point) or (not b_minus and not b_point)
    return b

a = input().strip()
b = input().strip()
if isdigit(a) and isdigit(b):
    if '.' in a or '.' in b:
        print(float(a) + float(b))
    else:
        print(int(a) + int(b))
else:
    print(a + b)