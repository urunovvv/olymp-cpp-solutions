def gcd(a,b):
    if a < b:
        a,b = b,a
    while b!=0:
        a %= b
        a,b = b,a
    return a
n,m = map(int, input().split())
print(n + m - gcd(n,m))