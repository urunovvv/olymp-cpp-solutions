def dist(a, b, n):
    d = abs(a - b)
    return min(d, n - d)

def main():
    n = int(input())
    lst = list(map(int, input().split()))
    balls = []
    emp = []
    for i in range(n):
        x = lst[i]
        for j in range(x):
            balls.append(i)
        if x == 0:
            emp.append(i)
    m = len(balls)
    if m <= 1:
        print(0)
        return
    ans = 10**18
    for j in range(m):
        k = 0
        for i in range(m):
            bp = balls[i]
            ep = emp[(i + j) % m]
            k += dist(bp, ep, n)
        ans = min(ans, k)
    print(ans)
if __name__ == "__main__":
    main()
