import sys


def solve(pieces, people):
    if pieces < people:
        return 0
    if people == 1 or pieces == people:
        return 1
    if (pieces, people) in mp:
        return mp[(pieces, people)]
    mp[(pieces, people)] = solve(pieces - 1, people - 1) + solve(
        pieces - people, people
    )
    return mp[(pieces, people)]


N = int(sys.stdin.readline())
K = int(sys.stdin.readline())
mp = {}
print(solve(N, K))
