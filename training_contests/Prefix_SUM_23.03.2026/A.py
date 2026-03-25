import sys
from math import prod
input = sys.stdin.readline
n, q = map(int, input().split())
a = list(map(int, input().split()))
pref_sum = [0] * (n + 1)
pref_mult = [1] * (n + 1)
suff_sum = [0] * (n + 1)
suff_mult = [1] * (n + 1)
for i in range(1, n + 1):
    pref_sum[i] = pref_sum[i - 1] + a[i - 1]
for _ in range(q):
    _type, l, r = map(int, input().split())
    if _type == 1:
        print(pref_sum[r] - pref_sum[l - 1])
    else:
        if a[l-1:r].count(0) > 0:
            print(0)
        else:
            print(1)