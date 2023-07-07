# More Optimized - ~3s
N = int(input())
count = [0] * N

for i in range(N):
    count[i] = 0

for i in range(N):
    s = input()
    for j in range(N):
        if s[j] == "S":
            count[j] += 1

for i in range(N):
    count[i] = N - count[i]

for i in range(N):
    ans = ""
    for j in range(N):
        if count[j] > 0:
            ans += "."
            count[j] -= 1
        else:
            ans += "S"
    print(ans)


"""
Optimized - ~5s
N = int(input())
arr = [0] * 1501

for i in range(N):
    str = input()
    for j in range(N):
        arr[j] += str[j] == "S"

for i in range(N):
    for j in range(N):
        print("S" if (N - i) <= arr[j] else ".", end="")
    print()
"""

"""
Unoptimized solution - ~7s
N = int(input())
grid = [["" for _ in range(1501)] for _ in range(1501)]

for i in range(1, N + 1):
    str = input()
    for j in range(1, N + 1):
        grid[i][j] = str[j - 1]

for i in range(1, N + 1):
    count = 0
    for j in range(1, N + 1):
        if grid[j][i] == "S":
            count += 1
    for j in range(1, count + 1):
        grid[N - j + 1][i] = "S"
    for j in range(count + 1, N + 1):
        grid[N - j + 1][i] = "."

for i in range(1, N + 1):
    for j in range(1, N + 1):
        print(grid[i][j], end="")
    print()
"""
