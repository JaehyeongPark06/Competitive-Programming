import sys

N = int(input())

V = sys.stdin.read().strip().split("\n\n")

for x in V:
    dic = {}
    count = 1
    for _ in x.split("\n"):
        line = []
        for a in _.split():
            if a in dic:
                line.append(dic[a])
            else:
                line.append(a)
                dic[a] = count
                count += 1
        print(" ".join(map(str, line)))
    print()
