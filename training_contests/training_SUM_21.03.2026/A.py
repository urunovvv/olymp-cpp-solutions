# Даны две строки. Если обе строки являются числом, то выведите их сумму, иначе выведите 
# конкатенацию этих строк. Числом считается строка, соблюдающая следующие условия: 
# она может быть преобразована в число типа int или float. 
# Число может содержать не более одного знака минус и не более одной десятичной точки.
# В случае, если обе строки являются числами, но хотя бы одна из них является числом с 
# плавающей точкой, то результатом будет число с плавающей точкой. Иначе результатом 
# будет целое число.

from decimal import Decimal

def is_digit(s):
    minus = s.count('-')
    dot = s.count('.')
    if minus > 1 or dot > 1:
        return False
    minus = s.find('-')
    dot = s.find('.')
    if not (minus == -1 or minus == 0):
        return False
    if not (dot == -1 or dot != 0 and dot != len(s) - 1):
        return False
    for c in s: 
        if c == '-' or c == '.':
            continue
        if not c.isdigit():
            return False
    return True
a = input()
b = input()
if is_digit(a) and is_digit(b):
    a = Decimal(a)
    b = Decimal(b)
    print(sum([a, b]))
else:
    print (a + b)