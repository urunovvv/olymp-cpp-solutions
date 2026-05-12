def find_min_period(s):
    n = len(s)
    for period in range(1, n + 1):
        if n % period == 0:
            per_str = s[:period]
            rep = per_str * (n // period)
            if rep == s:
                return period
    return n
def main():
    string = input()
    print(find_min_period(string))
    return 

if __name__ == "__main__":
    main()