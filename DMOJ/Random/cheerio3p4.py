# ONLY WORKS IN PYPY3

MAX_LONG = 9223372036854775807
MOD = 1000000007


def cntone(l, r, i, psa):
    return psa[r][i] - psa[l - 1][i]


def cntzero(l, r, i, psa):
    return (r - l + 1) - cntone(l, r, i, psa)


N = int(input())
arr = [0] + list(map(int, input().split()))
psa = [[0] * 30 for _ in range(N + 1)]
dp = [[[MAX_LONG for _ in range(30)] for _ in range(N + 1)] for _ in range(N + 1)]

for j in range(30):
    for i in range(1, N + 1):
        psa[i][j] = psa[i - 1][j] + ((arr[i] & (1 << j)) > 0)

for l in range(1, N + 1):
    for r in range(l, N + 1):
        dp[l][r][0] = min(cntone(l, r, 0, psa), cntzero(l, r, 0, psa))
        for k in range(l, r):
            dp[l][r][0] = min(
                dp[l][r][0], cntone(l, k, 0, psa) + cntzero(k + 1, r, 0, psa)
            )

for i in range(29):
    for l in range(1, N + 1):
        for r in range(l, N + 1):
            dp[l][r][i + 1] = min(
                dp[l][r][i + 1],
                dp[l][r][i] + min(cntone(l, r, i + 1, psa), cntzero(l, r, i + 1, psa)),
            )
            for k in range(l, r):
                dp[l][r][i + 1] = min(
                    dp[l][r][i + 1],
                    dp[l][k][i]
                    + dp[k + 1][r][i]
                    + cntone(l, k, i + 1, psa)
                    + cntzero(k + 1, r, i + 1, psa),
                )

print(dp[1][N][29])
