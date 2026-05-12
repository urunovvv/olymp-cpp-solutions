def solve(s):
    i = 0
    n = len(s)
    if n==1 or s[0].islower() or s[-1].isupper():
        print("No")
        return
    while i < n:
        if s[i].isupper():
            cnt = 1
            i += 1
            while i < n and s[i].islower():
                i += 1
                cnt += 1
            if cnt < 2 or cnt > 4:
                print("No")
                return
        else:
            i += 1
    print("Yes")

s = input()
solve(s)
