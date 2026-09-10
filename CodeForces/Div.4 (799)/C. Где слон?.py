for _ in range(int(input())):
    m = [input() for i in range(8)]
    ans = ""
    for i in range(1, 7):
        if m[i].count('#') == 1:
            ans += str(i + 1) + ' ' + str(1 + m[i].find('#'))
    print(ans)