for _ in range(int(input())):
    n, m = map(int, input().split())
    heap_a, heap_b = list(map(int, input().split())), list(map(int, input().split()))
    tuda, tudb = heap_a[-1], heap_b[-1] # turns until defeat a and b
    if n > 1:
        for i in range(1, n):
            tuda += heap_a[i - 1] - heap_a[i]
    else:
        tuda = n
    if m > 1:
        for i in range(1, m):
            tudb += heap_b[i - 1] - heap_b[i]
    else:
        tudb = m
    print(1 if tuda >= tudb else 2)