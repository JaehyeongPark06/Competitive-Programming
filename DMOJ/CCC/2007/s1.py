import sys

n = int(sys.stdin.readline())

for x in range(1, n + 1):
    y, m, d = map(int, sys.stdin.readline().split())

    if y > 1989:
        print("No")
    elif y == 1989:
        if m > 2:
            print("No")
        elif m == 2:
            if d > 27:
                print("No")
            else:
                print("Yes")
        else:
            print("Yes")
    else:
        print("Yes")
