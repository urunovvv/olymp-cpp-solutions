# Love Triangle
# time limit per test1 second
# memory limit per test256 megabytes
# As you could know there are no male planes nor female planes. However, each plane on Earth likes some other plane. There are n planes on Earth, numbered from 1 to n, and the plane with number i likes the plane with number fi, where 1 ≤ fi ≤ n and fi ≠ i.

# We call a love triangle a situation in which plane A likes plane B, plane B likes plane C and plane C likes plane A. Find out if there is any love triangle on Earth.

# Input
# The first line contains a single integer n (2 ≤ n ≤ 5000) — the number of planes.

# The second line contains n integers f1, f2, ..., fn (1 ≤ fi ≤ n, fi ≠ i), meaning that the i-th plane likes the fi-th.

# Output
# Output «YES» if there is a love triangle consisting of planes on Earth. Otherwise, output «NO».

# You can output any letter in lower case or in upper case.
def main():
    n = int(input())
    likes = [0] + [*map(int, input().split())]
    graph = [set() for i in range (n + 1)]
    for i in range(1, n + 1):
        graph[i].add(likes[i])

    for i in range (1, n + 1):
        if (likes[likes[likes[i]]] == i):
            print ('YES')
            return

    print ('NO')

if __name__ == "__main__":
    main()