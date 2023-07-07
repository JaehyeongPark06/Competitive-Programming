# ONLY WORKS IN PYPY3
import sys

gates = int(sys.stdin.readline())
planes = int(sys.stdin.readline())

air = [0 for x in range(gates)]
result = 0

for x in range(planes):
    plane = int(sys.stdin.readline()) - 1

    while plane >= 0 and air[plane] > 0:
        save = air[plane]
        air[plane] += 1
        plane = plane - save

    if plane < 0:
        break
    else:
        air[plane] += 1
        result += 1

print(result)
