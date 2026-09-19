n = int(input())
pref = [0]
a = list(map(int, input().split()))
for i in range(1, len(a)+1):
    ls = [i] * a[i-1]
    pref += ls
m = int(input())
qq = list(map(int, input().split()))
for q in qq:
    print(pref[q])