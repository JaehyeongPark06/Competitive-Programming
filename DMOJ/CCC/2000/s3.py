from collections import deque

adj = [[] for _ in range(102)]
name = {}
names = [None] * 102


def bfs(a, b):
    vis = [False] * 102
    vis[a] = True
    q = deque()
    q.append(a)
    while q:
        u = q.popleft()
        if u == b:
            return True
        for v in adj[u]:
            if not vis[v]:
                vis[v] = True
                q.append(v)
    return False


n = int(input().strip())
count = 0
for _ in range(n):
    site = input().strip()
    if site in name:
        cur = name[site]
    else:
        cur = count
        name[site] = count
        names[cur] = site
        count += 1
    site = input().strip()
    while site != "</HTML>":
        st = site.find('<A HREF="')
        while st >= 0:
            end = site.find('">', st + 9)
            to = site[st + 9 : end]
            print("Link from", names[cur], "to", to)
            if to in name:
                nx = name[to]
            else:
                nx = count
                name[to] = count
                names[count] = to
                count += 1
            adj[cur].append(nx)
            site = site[end + 2 :]
            st = site.find('<A HREF="')
        site = input().strip()

while True:
    link = input().strip()
    if link == "The End":
        break
    link2 = input().strip()
    a = name[link]
    b = name[link2]
    if bfs(a, b):
        print("Can surf from", link, "to", link2 + ".")
    else:
        print("Can't surf from", link, "to", link2 + ".")
