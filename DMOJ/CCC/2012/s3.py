import sys

MM = 1002
N = int(sys.stdin.readline())
arr = [0] * MM
one = []
two = []
ans = 0
ft = 0
sd = 0

for _ in range(N):
    r = int(sys.stdin.readline())
    arr[r] += 1

for i in range(MM):
    if arr[i] > ft:
        sd = ft
        ft = arr[i]
    elif arr[i] > sd:
        sd = arr[i]

for i in range(MM):
    if arr[i] == ft:
        one.append(i)
    elif arr[i] == sd:
        two.append(i)

for i in one:
    for j in one:
        ans = max(ans, abs(i - j))
    for j in two:
        ans = max(ans, abs(i - j))

print(ans)
