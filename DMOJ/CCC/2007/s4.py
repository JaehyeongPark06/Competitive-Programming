import sys

n = int(next(sys.stdin))
adj = [[] for _ in range(n + 1)]

while True:
    a, b = map(int, next(sys.stdin).split())
    if a == 0 and b == 0:
        break
    adj[b].append(a)

dp = [0] * (n + 1)
dp[1] = 1

for x in range(2, n + 1):
    for y in adj[x]:
        dp[x] += dp[y]

sys.stdout.write(str(dp[n]) + "\n")
