import sys

mot = [0, 990, 1010, 1970, 2030, 2940, 3060, 3930, 4060, 4970, 5030, 5990, 6010, 7000]
a, b, c, n = 0, 0, 0, 0
dp = [-1] * 100


def nxt(p):
    if dp[p] != -1:
        return dp[p]
    if mot[p] == 7000:
        dp[p] = 1
        return dp[p]
    dp[p] = 0
    for x in range(p + 1, len(mot)):
        if a <= mot[x] - mot[p] <= b:
            dp[p] += nxt(x)
    return dp[p]


for _ in range(100):
    dp[_] = -1
a = int(sys.stdin.readline())
b = int(sys.stdin.readline())
n = int(sys.stdin.readline())
for _ in range(n):
    c = int(sys.stdin.readline())
    mot.append(c)
mot.sort()
print(nxt(0))
