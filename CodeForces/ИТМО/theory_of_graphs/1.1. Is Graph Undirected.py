import sys
# input = sys.stdin.readline()
def main():
    t = int(input())
    res = ""
    for _ in range(t):
        undirected = True
        st = set()
        n, m = map(int, sys.stdin.readline().split())
        # n, m = min(n, m), max(n, m)
        for i in range(m):
            a, b = map(int, sys.stdin.readline().split())
            a, b = min(a, b), max(a, b)
            if (a, b) in st or a == b:
                undirected = False
            st.add((a, b))
        res += ("YES\n" if undirected else "NO\n")
    sys.stdout.write(res)

if __name__ == "__main__":
    main()