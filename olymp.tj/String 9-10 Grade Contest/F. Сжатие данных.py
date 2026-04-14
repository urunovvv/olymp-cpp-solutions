def encode_str(s: str) -> str:
    res = ""
    last = s[0]
    count = 0
    for c in s:
        if c == last:
            count += 1
        else:
            res += f"{last}{count}" if count > 1 else last
            last = c
            count = 1
    res += f"{last}{count}" if count > 1 else last
    return res

def decode_str(s: str) -> str:
    res = ""
    i = 0
    while i < len(s):
        char = s[i]
        count = 1
        if s[i + 1].isdigit():
            count = int(s[i + 1])
            i += 1
        # count = int(s[i + 1])
        # char = s[i]
        res += char * count
        i += 1
    return res

def main():
    s = list(map(str, input().split(':')))
    if s[0] == "encode":
        print(encode_str(s[1]))
    else:
        print(decode_str(s[1]))

if __name__ == "__main__":
    main()