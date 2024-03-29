MAX = 100
res = [0] * MAX
temp = []


def babbling(op):
    global res
    if op == 99:
        idx = int(input())
        percent = int(input())
        split(idx - 1, percent)
    elif op == 88:
        idx = int(input())
        join(idx - 1)


def split(idx, percent):
    global res
    suf = res.copy()
    if percent == 0:
        return
    l = round(res[idx] * (percent / 100))
    r = round(res[idx] * (100 - percent) / 100)
    res[idx] = l
    res[idx + 1] = r
    for i in range(idx + 2, MAX):
        res[i] = suf[i - 1]


def join(idx):
    global res
    suf = res.copy()
    res[idx] = res[idx] + res[idx + 1]
    for i in range(idx + 1, MAX - 1):
        res[i] = suf[i + 1]


N = int(input())
for i in range(N):
    res[i] = int(input())

op = int(input())
while op != 77:
    babbling(op)
    op = int(input())

for nxt in res:
    if nxt != 0:
        print(nxt, end=" ")
