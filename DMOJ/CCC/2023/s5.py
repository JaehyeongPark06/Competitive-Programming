import math

N = int(input())
nums = []


def filter(it, start, end):
    global nums

    if it == 0:
        for i in range(math.ceil(start), math.floor(end) + 1):
            nums.append(i)
    else:
        right = start + (end - start) / 3
        left = start + 2 * (end - start) / 3
        filter(it - 1, start, right)
        filter(it - 1, left, end)


def check(i):
    global N
    if i * 3 > N and i * 3 < 2 * N:
        return False

    if i * 3 <= N:
        i *= 3
        if i in interval:
            return True
        interval[i] = True
        return check(i)

    else:
        i *= 3
        i -= N * 2
        if i in interval:
            return True
        interval[i] = True
        return check(i)


filter(19, 0.0, N)

for i in nums:
    interval = {}
    if check(i):
        print(i)
