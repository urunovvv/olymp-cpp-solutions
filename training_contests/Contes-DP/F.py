n = int(input())
a = [1]
i2 = i3 = i5 = 0
# ИИИИУУУУУУУУУУУУУ!
for _ in range(1, n):
    next2 = a[i2] * 2
    next3 = a[i3] * 3
    next5 = a[i5] * 5
    ans = min(next2, next3, next5)
    a.append(ans)
    if ans == next2: 
        i2 += 1
    if ans == next3: 
        i3 += 1
    if ans == next5:    
        i5 += 1
result = a[-1]
print(result)