# ONLY WORKS IN PYPY3
from collections import deque
import sys

adj = [[] for _ in range(1000001)]


def bfs(a, b):
    vis = [False] * 1000001
    buf = deque()
    buf.append(a)
    vis[a] = True
    while buf:
        u = buf.popleft()
        for x in adj[u]:
            if not vis[x]:
                buf.append(x)
                vis[x] = True
    return vis[b]


n, m = map(int, sys.stdin.readline().split())
for _ in range(m):
    a, b = map(int, sys.stdin.readline().split())
    adj[a].append(b)
a, b = map(int, sys.stdin.readline().split())
if bfs(a, b):
    print("yes")
elif bfs(b, a):
    print("no")
else:
    print("unknown")
