from math import isqrt
import sys
def solve(p: int, q: int) -> str:
    s = p + 2 * q
    x = 2 * s + 1
    for a in range(3, isqrt(x) + 1, 2):
        if x % a != 0:
            continue
        b = x // a
        if b - a > 2 * p:
            continue
        n = (a - 1) // 2
        m = (b - 1) // 2
        if n > 0 and m > 0:
            return f"{n} {m}"
    return "-1"
    ##########################
    #     KAMOL FOREVER      #
    ##########################
def main():
    input = sys.stdin.readline
    t = int(input())
    ans = []
    for _ in range(t):
        p, q = map(int, input().split())
        ans.append(solve(p, q))
    sys.stdout.write("\n".join(ans))

if __name__ == "__main__":
    main()
