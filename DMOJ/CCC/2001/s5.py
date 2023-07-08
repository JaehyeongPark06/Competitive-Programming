import sys


def dfs(i, aa, bb):
    global m, n
    if aa == bb and len(aa) > 0:
        return True
    if i == m - 1:
        return False
    for x in range(n):
        if dfs(i + 1, aa + a[x], bb + b[x]):
            ans.append(x)
            return True
    return False


m = int(input())
n = int(input())
a = [input() for _ in range(n)]
b = [input() for _ in range(n)]

ans = []
if dfs(0, "", ""):
    print(len(ans))
    ans.reverse()
    for x in ans:
        print(x + 1)
else:
    print("No solution.")
