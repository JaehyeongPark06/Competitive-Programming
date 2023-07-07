# ONLY WORKS IN PYPY3
import math

every = []

n, m = map(int, input().split())
l = n
k = -1

for i in range(3, n - 3 + 1):
    length = math.ceil((2.0 * i * i + n) / (2.0 * i + 1))
    if length < l:
        k = i
        l = length

print(l)

every.extend(range(1, k + 1))
every.extend(range(2 * k + 1, n + 1, 2 * k + 1))

if every[-1] + k < n:
    every.append(every[-1] + k)

for i in range(len(every)):
    print(every[i], end="")
    if i != len(every) - 1:
        print(" ", end="")
print()
