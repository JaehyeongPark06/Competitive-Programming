import sys
from collections import deque


n = int(sys.stdin.readline())
adj = [[] for _ in range(10000)]
for _ in range(n):
    a, b = map(int, sys.stdin.readline().split())
    adj[a].append(b)

a, b = map(int, sys.stdin.readline().split())
while a or b:
    buf = deque()
    buf.append(a)
    dis = [float("inf")] * 10000
    dis[a] = 0
    while buf:
        u = buf.popleft()
        for x in adj[u]:
            if dis[u] + 1 < dis[x]:
                dis[x] = dis[u] + 1
                buf.append(x)
    if dis[b] == float("inf"):
        print("No")
    else:
        print("Yes", dis[b] - 1)
    a, b = map(int, sys.stdin.readline().split())
