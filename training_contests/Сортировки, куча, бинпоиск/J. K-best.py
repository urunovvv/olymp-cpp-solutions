def main():
    n, k = map(int, input().split())
    v = [0] * n
    w = [0] * n
    for i in range(n):
        v[i], w[i] = map(int, input().split())
    l, r = 0, 10**6
    kBest = []
    while l < r:
        m = (l + r) / 2
        cur = [[0, 0] for _ in range(n)]
        for i in range(n):
            cur[i][0] = v[i] - m * w[i]
            cur[i][1] = i
        cur.sort(reverse=True)
        print (cur)
        s = 0
        s += (cur[i][0] for i in range(k))
        if s >= 0:
            l = m
            kBest = [cur[i][1] for i in range(k)]
        else:
            r = m
    print(' '.join(str(x + 1) for x in sorted(kBest)))

if __name__ == "__main__":
    main()