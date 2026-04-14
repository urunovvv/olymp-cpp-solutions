def main():
    s = input()
    st = set()
    for i in range(len(s)):
        for j in range(i, len(s)):
            st.add(s[i:j+1])
    print(len(st))

if __name__ == "__main__":
    main()