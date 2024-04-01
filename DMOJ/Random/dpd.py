# ONLY WORKS IN PYPY3
import sys


def main():
    n, w = map(int, sys.stdin.readline().split())
    items = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]

    dp = [[0 for _ in range(w + 1)] for _ in range(n + 1)]

    for i in range(1, n + 1):
        for j in range(w + 1):
            dp[i][j] = dp[i - 1][j]
            if j - items[i - 1][0] >= 0:
                dp[i][j] = max(
                    dp[i][j], dp[i - 1][j - items[i - 1][0]] + items[i - 1][1]
                )

    print(dp[n][w])


if __name__ == "__main__":
    main()
