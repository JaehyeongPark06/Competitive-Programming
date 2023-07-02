t = int(input())

for i in range(t):
    count = 1
    n = int(input())
    mountain = []
    branch = []

    for j in range(1, n + 1):
        mountain.append(int(input()))

    while mountain:
        if mountain[-1] == count:
            mountain.pop()
            count += 1
        elif branch and branch[-1] == count:
            branch.pop()
            count += 1
        else:
            branch.append(mountain.pop())

    ok = True

    while branch:
        if branch[-1] == count:
            branch.pop()
            count += 1
        else:
            ok = False
            branch.pop()

    print("Y" if ok else "N")
