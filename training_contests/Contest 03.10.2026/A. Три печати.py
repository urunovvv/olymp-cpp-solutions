def cn2(n):
    return (fact(n) // (2 * fact(n - 2))) if n > 1 else 0

from math import factorial as fact
n = int(input())
a = list(map(int, input().split()))
o, t, th = a.count(1), a.count(2), a.count(3)
# print (o, t, th)
oo, tt, thh = cn2(o), cn2(t), cn2(th)
print(oo * (t + th) + tt * (o + th) + thh * (o + t))