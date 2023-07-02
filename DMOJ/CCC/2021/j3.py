n = input()

while n != "99999":
    s = int(n[0]) + int(n[1])

    if s % 2 == 0 and s != 0:
        i = "right"
    elif s % 2 != 0:
        i = "left"

    print(i, n[2:])

    n = input()
