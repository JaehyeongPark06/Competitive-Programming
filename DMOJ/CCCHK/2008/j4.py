def check(snapshot):
    xcount = snapshot.count("X")
    ocount = snapshot.count("O")

    if xcount < ocount or xcount > ocount + 1:
        return False

    row = [snap[i : i + 3] for i in range(0, 9, 3)]
    col = [snap[i::3] for i in range(3)]
    diag = [snap[::4], snap[2:7:2]]

    xwin = any(ln == "XXX" for ln in row + col + diag)
    owin = any(ln == "OOO" for ln in row + col + diag)

    if xwin and owin:
        return False

    if owin and xcount != ocount:
        return False

    if xwin and xcount != ocount + 1:
        return False

    return True


T = int(input())

for _ in range(T):
    snap = input().strip()
    if check(snap):
        print("yes")
    else:
        print("no")
