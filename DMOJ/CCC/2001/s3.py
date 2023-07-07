from collections import deque

adj = [[False] * 27 for _ in range(27)]
vis = [False] * 27


def bfs():
    global adj, vis
    vis = [False] * 27
    buf = deque()
    buf.append(0)
    while buf:
        u = buf.popleft()
        if u == 1:
            return False
        for x in range(27):
            if adj[u][x] and not vis[x]:
                buf.append(x)
                vis[x] = True
    return True


ed = []
while True:
    inp = input()
    if inp == "**":
        break
    a, b = inp[0], inp[1]
    ed.append((a, b))
    adj[ord(a) - ord("A")][ord(b) - ord("A")] = adj[ord(b) - ord("A")][
        ord(a) - ord("A")
    ] = True

c = 0
for x in ed:
    adj[ord(x[0]) - ord("A")][ord(x[1]) - ord("A")] = adj[ord(x[1]) - ord("A")][
        ord(x[0]) - ord("A")
    ] = False
    if bfs():
        print(x[0] + x[1])
        c += 1
    adj[ord(x[0]) - ord("A")][ord(x[1]) - ord("A")] = adj[ord(x[1]) - ord("A")][
        ord(x[0]) - ord("A")
    ] = True

print("There are", c, "disconnecting roads.")
