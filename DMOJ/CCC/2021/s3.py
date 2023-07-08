import sys

N = int(sys.stdin.readline())
A = []
B = []
C = []

for _ in range(N):
    a, b, c = map(int, sys.stdin.readline().split())
    A.append(a)
    B.append(b)
    C.append(c)

ans = sys.maxsize


def solve(M):
    ret = 0
    for i in range(N):
        D = max(0, abs(A[i] - M) - C[i])
        ret += D * B[i]
    global ans
    ans = min(ans, ret)
    return ret


l = 0
r = 1e9

while l <= r:
    M = (l + r) // 2
    if solve(M) < solve(M + 1):
        r = M - 1
    else:
        l = M + 1

print(int(ans))
