def solve():    
    n, q = map(int, input().split())    
    a = list(map(int, input().split()))    
    for _ in range(q):
        l, r, k = map(int, input().split()) 
        l -= 1
        sm = sum(a)
        diap = r - l
        el = diap * k 
        new_sum = sm - sum(a[l:r]) + el
        if new_sum % 2 != 0:
            print("YES")
        else:
            print("NO")
solve()