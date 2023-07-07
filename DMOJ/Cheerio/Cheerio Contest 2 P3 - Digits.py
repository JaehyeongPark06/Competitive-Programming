# ONLY WORKS IN PYPY3
X, Y, Q = map(int, input().split())
for i in range(1, Q + 1):
    q = int(input())
    if X < Y:
        X, Y = Y, X
    if 1 <= q <= Y - 1:
        print("9")
    if q == Y:
        print("8")
    if Y + 1 <= q <= X:
        print("9")
    if X + 1 <= q <= X + Y - 1:
        print("0")
    if q == X + Y:
        print("1")
