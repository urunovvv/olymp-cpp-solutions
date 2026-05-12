# a = input()
# b = input()
# # a = str(a)
# # b = str(b)
# n = max(len(a), len(b))
# a = a.zfill(n)
# b = b.zfill(n)
# ans = ""
# for i in range(n):
#     x = int(a[i])
#     y = int(b[i])
#     ans += str((x + y) % 10)
# print(ans)

n, s, k = map(int, input().split())
ans =  (s / k) * 3600
print(ans)