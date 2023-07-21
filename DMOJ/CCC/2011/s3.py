import math

def solve(m, x, y):
    if m == 0:
        return False

    x1 = x // int(math.pow(5, m - 1))
    y1 = y // int(math.pow(5, m - 1))
    
    if x1 == 0 and y1 == 0:
        return False
    if 0 < x1 < 4 and y1 == 0:
        return True
    if x1 == 2 and y1 == 1:
        return True
    if ((x1 == 1 or x1 == 3) and y1 == 1) or (x1 == 2 and y1 == 2):
        return solve(m - 1, x % int(math.pow(5, m - 1)), y % int(math.pow(5, m - 1)))
    return False


T = int(input())
while T > 0:
    m, x, y = map(int, input().split())
    print("crystal" if solve(m, x, y) else "empty")
    T -= 1