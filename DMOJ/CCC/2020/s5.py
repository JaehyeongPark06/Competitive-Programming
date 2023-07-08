import sys

N = int(sys.stdin.readline())
B = list(map(int, sys.stdin.readline().split()))
dp = [0] * N
C = 0
last = {B[-1]: N - 1}

if B[-1] == B[0]:
    dp[-1] = 1
    C += 1
    print("{:.8f}".format(C))
else:
    for i in range(N - 2, -1, -1):
        if B[i] == B[0]:
            dp[i] = 1
        elif B[i] in last:
            dp[i] = dp[last[B[i]]]
        else:
            dp[i] = (1 + C) / (N - i)
        C += dp[i]
        if B[i] not in last:
            last[B[i]] = i

    print("{:.8f}".format(C / N))
