def main():
    s = input()
    n = len(s)
    s += s
    ans = s[:n]
    for i in range(1, n):
        if s[i:i+n] < ans:
            ans = s[i:i+n]
    print(ans)
    return

if __name__ == "__main__":
    main()