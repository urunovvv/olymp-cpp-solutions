ans = ""

def solve():
    global ans
    n = int(input())
    a = sorted(list(map(int, input().split())))
    target = a[0] * a[-1]
   
    cnt, i = 0, 2
    while i * i <= target:
        if target % i == 0:
            cnt += 2
            if target // i == i:
                cnt -= 1
        i += 1
    ans += (str(target)+'\n') if cnt == n else '-1\n'    

for _ in range(int(input())):
    solve()
print(ans)
