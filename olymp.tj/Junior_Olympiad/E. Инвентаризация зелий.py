import sys
input = sys.stdin.readline

def urunov():
    n, q = map(int, input().split())
    potions = list(map(int, input().split()))
    s = set()
    pref = [0] * (n+1)
    ans = ""
    for i in range(len(potions)):
        s.add(potions[i])
        pref[i+1] = len(s)
    for _ in range(q):
        l, r = map(int, input().split())
        ans += f'{pref[r-1] - pref[l-1]}\n'
    print(ans)
    return

def main():
    urunov()

if __name__ == "__main__":
    main()