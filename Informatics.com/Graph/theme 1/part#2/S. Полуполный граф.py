def main():
    n,m = map(int, input().split())
    g = [set() for _ in range(n)]
    for i in range(m):
        a,b = map(int, input().split())
        g[a-1].add(b-1)
        g[b-1].add(a-1)
    for i in range(n):
        if len(g[i]) != len(g[i-1]):
            print ("NO")
            return
    print ("YES")

if __name__ == "__main__":
    main()