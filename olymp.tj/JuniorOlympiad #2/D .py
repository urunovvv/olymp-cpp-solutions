n, q = map(int, input().split())
a = list(map(int, input().split()))
def bin_search(target):
    global n, a
    l, r = 0, n
    while (l < r):
        mid = (l + r) // 2
        if a[mid] >= target:
            r = mid
        else:
            l = mid + 1
    return l + 1

def main():
    while q:
        i = int(input())
        if (i > n):
            print(n+1)
            continue
        print(bin_search(i))
    return

if __name__ == '__main__':
    main()