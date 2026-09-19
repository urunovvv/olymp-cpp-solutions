for _ in range (int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    for i in range(n-1):
        cnt1, cnt2 = 0, 0
        for j in range(i+1, n):
            if a[i] > a[j]:
                cnt1+=1
            elif a[i] < a[j]:
                cnt2+=1
        print(max(cnt1, cnt2), end=" ")
    print(0)
    