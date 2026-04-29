def urunov():
    n, S = map(int, input().split())
    a = list(map(int, input().split()))
    l = 0
    r = 0
    cur = 0
    max_len = 0
    while r < n:
        cur += a[r]
        while cur > S:
            cur -= a[l]
            l += 1
        max_len = max(max_len, r - l + 1)
        r += 1
    print(max_len)

def main():
    urunov()

if __name__ == "__main__":
    main()