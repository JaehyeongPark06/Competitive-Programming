# ONLY WORKS IN PYPY3
import sys


def main():
    s = sys.stdin.readline().strip()
    t = sys.stdin.readline().strip()

    n = len(s)
    m = len(t)

    dp = [[0 for _ in range(m + 1)] for _ in range(n + 1)]

    for i in range(1, n + 1):
        for j in range(1, m + 1):
            if s[i - 1] == t[j - 1]:
                dp[i][j] = 1 + dp[i - 1][j - 1]
            else:
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])

    ans = ""
    i = n
    j = m
    while i > 0 and j > 0:
        if s[i - 1] == t[j - 1]:
            ans += s[i - 1]
            i -= 1
            j -= 1
        else:
            if dp[i - 1][j] > dp[i][j - 1]:
                i -= 1
            else:
                j -= 1

    print(ans[::-1])


if __name__ == "__main__":
    main()
