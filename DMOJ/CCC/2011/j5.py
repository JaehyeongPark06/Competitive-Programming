adj = [[] for _ in range(10)]


def solve(u):
    a = 1
    for x in adj[u]:
        a *= solve(x) + 1
    return a


n = int(input())
for x in range(1, n):
    a = int(input())
    adj[a].append(x)
print(solve(n))
