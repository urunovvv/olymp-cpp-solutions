def solve():
    n = int(input())
    c = 1
    for i in range(n):
        print (c, end=' ')
        c += 2
    print()

def main():
    t = int(input())
    for i in range(t):
        solve()

main()