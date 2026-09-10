a, b, c = map(int, input().split())
ans = ((a + c - 1) // c) * ((b + c - 1) // c)
print(ans)