import sys

ss = {100, 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000}
mp = [0, 100, 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000]

n = int(sys.stdin.readline())
for _ in range(n):
    a = int(sys.stdin.readline())
    ss.remove(mp[a])

s = sum(ss)
a = int(sys.stdin.readline())
if a * len(ss) > s:
    print("deal")
else:
    print("no deal")
