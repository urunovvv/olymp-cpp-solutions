def to_equal_length(list1, list2):
    if len(list1) < len(list2):
        list1 += [0] * (len(list2) - len(list1))
    elif len(list2) < len(list1):
        list2 += [0] * (len(list1) - len(list2))
    return list1, list2

def find_last_version(list1, list2, version1, version2):
    for x, y in zip(list1, list2):
        if x > y:
            print(version1)
            return
        if x < y:
            print(version2)
            return
    print('equal')

def main():
    l1 = input().strip()
    l2 = input().strip()
    list1 = list(map(int, l1.split('.')))
    list2 = list(map(int, l2.split('.')))

    list1, list2 = to_equal_length(list1, list2)
    find_last_version(list1, list2, l1, l2)

if __name__ == "__main__":
    main()
    