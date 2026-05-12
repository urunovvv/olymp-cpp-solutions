def main():
    k, n = map(int, input().split())
    a = list(map(int, input().split()))
    VasyaScores, PetyaScores = 0, 0
    for _ in range(n):
        i = a[_]
        if i % 5 == 0 and i % 3 == 0 or i % 5 != 0 and i % 3 != 0:
            continue
        elif i % 5 == 0:
            VasyaScores += 1
        elif i % 3 == 0:
            PetyaScores += 1
        
        if VasyaScores == k or PetyaScores == k:
            print('Petya' if PetyaScores == k else 'Vasya')
            return
        # print (f'Vasya: {VasyaScores}; Petya: {PetyaScores}')
    if PetyaScores == VasyaScores:
        print ('Draw')
        return
    print ('Petya' if PetyaScores > VasyaScores else 'Vasya')
    return 

main()