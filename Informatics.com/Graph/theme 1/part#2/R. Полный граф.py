def main():
    n,m = map(int, input().split())
    g = [[0 for _ in range(n)] for _ in range(n)]
    for _ in range(m):
        a,b = map(int, input().split())
        g[a-1][b-1] = 1
        g[b-1][a-1] = 1
    for i in range(n):
        g[i][i] = 1
    for i in g:
        for j in i:
            if j == 0:
                print("NO")
                return
    print ("YES")

if __name__ == "__main__":
    main() 
    