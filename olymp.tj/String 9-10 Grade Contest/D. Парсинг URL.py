def parse_url(url: str) -> dict:
    idx = url.index("?")
    path = url[idx + 1:]
    params = path.split("&")
    res = {}
    for param in params:
        key, value = param.split("=")
        res[key] = value
    ans = sorted(res.items())
    res = ""
    for key, value in ans:
        res += f"{key}={value}\n"
    return res

def main():
    url = input()
    print(parse_url(url))

if __name__ == "__main__":
    main()