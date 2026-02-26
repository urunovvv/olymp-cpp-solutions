def main():
    n,m = map(int, input().split())
    g = [[0 for _ in range(n)] for _ in range (n)]
    for i in range(m):
        a,b = map(int, input().split())
        g[a-1][b-1] += 1
    for i in range(n):
        for j in range (n):
            if i != j:
                if (g[i][j] == 0 and g[j][i] == 0) or (g[i][j]==1 and g[j][i]==1):
                    print ("NO")
                    return
    print("YES")

if __name__ == "__main__":
    main()