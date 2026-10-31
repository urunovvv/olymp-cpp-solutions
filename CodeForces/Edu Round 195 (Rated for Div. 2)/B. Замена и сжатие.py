for _ in range(int(input())):
    s = input()
    ans = 1
    if "010" in s or "101" in s:
        ans += 1
    if "000" in s or "111" in s:
        ans += 1
    print(ans)

