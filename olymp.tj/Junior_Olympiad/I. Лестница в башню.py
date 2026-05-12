def urunov():
    n = int(input())
    a, b = 1, 2
    for i in range(1, n):
        a, b = b, a+b
    print(a)

def main():
    urunov()

if __name__ == "__main__":
    main()