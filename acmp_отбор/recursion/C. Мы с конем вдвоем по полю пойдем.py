s = input().split()
# print(s)
f, s = [ord(s[0][0]) - ord('a') + 1, ord(s[0][1]) - ord('0')], [ord(s[1][0]) - ord('a')+ 1, ord(s[1][1]) - ord('0')]

def dfs(x, y, depth):
    global s
    if (x < 1 or x > 8 or y < 1 or y > 8):
        return False
    if depth == 0:
        return (x, y) == (s[0], s[1])
    if depth == 1:
        return any((x + dx, y + dy) == (s[0], s[1]) for dx, dy in [(2, 1), (2, -1), (-2, 1), (-2, -1), (1, 2), (1, -2), (-1, 2), (-1, -2)])
    if depth == 2:
        return any(dfs(x + dx, y + dy, 1) for dx, dy in [(2, 1), (2, -1), (-2, 1), (-2, -1), (1, 2), (1, -2), (-1, 2), (-1, -2)])
    return False

if dfs(f[0], f[1], 1):
    print(1)
elif dfs(f[0], f[1], 2):
    print(2)
else:
    print("NO")