def main():
    path = input()
    slash = path[-1] == '/'
    path = path.split('/')
    # print(path)
    for i in range(len(path)-1, -1, -1):
        if path[i] == '..':
            path.pop(i)
            path.pop(i-1)
            i -= 2
        elif path[i] == '.' or path[i] == '':
            path.pop(i)
            i -= 1
    res = '/'.join(path)
    if slash and res != '/':
        res += '/'
    print(res)
    return

if __name__ == "__main__":
    main()