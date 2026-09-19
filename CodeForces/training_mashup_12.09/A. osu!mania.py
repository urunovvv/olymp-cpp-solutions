for _ in range(int(input())):
    n = int(input())
    a = [input() for i in range(n)]
    ans = []
    for i in range(n-1, -1, -1):
        for j in range(4):
            if (a[i][j]) == '#':
                ans.append(j+1)
                break
    print(*ans)