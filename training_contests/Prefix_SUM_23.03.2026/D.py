#Сумма на матрице
#Дана матрица nxm. Вам нужно написать программу, которая за О(1) находит сумму на подматрице 
# от x1, y1, x2, y2.
#*Подматрица — это прямоугольная непрерывная часть двумерного массива (матрицы)
#Входные данные
#Первая строка входных данных содержит целое число n, m, q (2≤n,m≤1000), (1≤q≤105) — 
# размеры матрицы и сумму и количество запросов.
#Далее задана матрица nxm. (-105≤aij≤105).
#Следующые q строк содержат x1, y1, x2, y2. (x1, y1) - правый нижный угол, (x2, y2) - левый верхний.
#Выходные данные
#Нужно вывести сумму для каждой подматрицы.

import sys
input = sys.stdin.readline

def answer(pref, coordintes):
    x1,y1,x2,y2 = map(int, coordintes)

    ans = pref[x1][y1] - pref[x2 - 1][y1] - pref[x1][y2 - 1] + pref[x2 - 1][y2 - 1]
    return '\n'.join(str(ans))

n,m,q = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(n)]
pref = [[0 for i in range(m+1)] for i in range(n+1)]
for i in range(m, 0, -1) :
        for j in range(n, 0, -1) :
            pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - \
            pref[i - 1][j - 1] + matrix[i - 1][j - 1]
res = ''
for _ in range(q):
    x1 , y2, x2, y1 = map(int, input().split())
    #if x2 < x1:
    #    x1, x2 = x2, x1
    #    y1, y2 = y2, y1
    res += answer(pref, [x1,y1,x2,y2])
sys.stdout.write(res)