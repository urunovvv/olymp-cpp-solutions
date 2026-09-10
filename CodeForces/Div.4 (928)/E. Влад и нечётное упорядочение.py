def urunov():
    n, k = map(int, input().split())
    if (n + 1) // 2 >= k:
        print(2 * k - 1)
        return
    k -= (n + 1) // 2
    x = 2
    while k > 0:
        z = (n // x + 1) // 2
        if k > z:
            k -= z
        else:
            print((2 * k - 1) * x)
            return
        x *= 2

for _ in range(int(input())):
    urunov()