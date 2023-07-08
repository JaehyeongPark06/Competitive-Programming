from collections import deque

m = int(input())
r = int(input())
c = int(input())

rm = []
aa = [["I" for _ in range(30)] for _ in range(30)]

for x in range(1, r + 1):
    row = input()
    for y in range(1, c + 1):
        aa[x][y] = row[y - 1]

for x in range(1, r + 1):
    for y in range(1, c + 1):
        if aa[x][y] == ".":
            aa[x][y] = "I"
            s = 0
            buf = deque()
            buf.append((x, y))
            while buf:
                xx, yy = buf.popleft()
                s += 1
                for ax, ay in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
                    if aa[xx + ax][yy + ay] == ".":
                        aa[xx + ax][yy + ay] = "I"
                        buf.append((xx + ax, yy + ay))
            rm.append(s)

rm.sort(reverse=True)
d = 0
for x in range(len(rm)):
    if m - rm[x] >= 0:
        m -= rm[x]
        d += 1
    else:
        break

print(f"{d} room{'s' if d != 1 else ''}, {m} square metre(s) left over")
