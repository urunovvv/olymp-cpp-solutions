import heapq

def dijkstra (graph, start):
    dists = {v: float('infinity') for v in graph}
    dists[start] = 0
    pq = [(0, start)]
    while pq:
        cur_d, cur_v = heapq.heappop(pq)
        if cur_d > dists[cur_v]:
            continue
        for neighbor, weight in graph[cur_v].items():
            distance = cur_d + weight
            if distance < dists[neighbor]:
                dists[neighbor] = distance
                heapq.heappush(pq, (distance, neighbor))
    return dists

n, m = map(int, input().split())
graph = {i: {} for i in range(1, n + 1)}
for _ in range(m):
    u, v, w = map(int, input().split())
    graph[u][v] = w
    graph[v][u] = w 
