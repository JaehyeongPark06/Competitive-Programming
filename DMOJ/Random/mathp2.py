import sys

MOD = 1000000007


N = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.read().split()))

ans = 0
power = 1
for i in range(N - 1):
    power = (power * 2) % MOD

for i in range(N):
    ans = (ans + (arr[i] * power) % MOD) % MOD

print(ans)
