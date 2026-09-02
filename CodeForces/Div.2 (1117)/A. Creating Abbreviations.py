response = []

for _ in range(int(input())):
    n, m = map(int, input().split())
    letters = set()
    for i in range(n):
        word = input().strip()
        letters.add(word[0].upper())
    YES = True
    for i in range(m):
        request = input().strip()
        if YES:
            for letter in request:
                if not (letter in letters):
                    YES = False
                    break
    response.append("YES" if YES else "NO")
print("\n".join(response))