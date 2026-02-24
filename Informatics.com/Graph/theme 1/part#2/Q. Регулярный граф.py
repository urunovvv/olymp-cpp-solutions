def main():
    n,m = map(int, input().split())
    g = [0 for _ in range(n)]
    for _ in range (m):
        a,b = map(int, input().split())
        g[a-1] += 1
        g[b-1] += 1
    b = True
    for i in range (1,n):
        if g[i] != g[i-1]:
            print("NO")
            return
    print("YES")

if __name__ == "__main__":
    main()