from collections import defaultdict

mx = 3 * 10 ** 6 + 9
par = [i for i in range(mx)]
mm = defaultdict(int)

def findp(x):
    if x == par[x]:
        return x
    par[x] = findp(par[x])
    return par[x]

def join(a, b):
    f = findp(mm[a])
    s = findp(mm[b])
    par[f] = s

def check(a, b):
    f = findp(mm[a])
    s = findp(mm[b])
    if f == s:
        return False
    return True

cnt = 1
n = int(input())
v = [tuple(input().split()) for _ in range(n)]
for x in v:
    if mm[x[0]] == 0:
        mm[x[0]] = cnt
        cnt += 1
    if mm[x[1]] == 0:
        mm[x[1]] = cnt
        cnt += 1

m = int(input())
v1 = [tuple(input().split()) for _ in range(m)]
for x in v1:
    if mm[x[0]] == 0:
        mm[x[0]] = cnt
        cnt += 1
    if mm[x[1]] == 0:
        mm[x[1]] = cnt
        cnt += 1

g = int(input())
for _ in range(g):
    a, b, c = input().split()
    if mm[a] == 0:
        mm[a] = cnt
        cnt += 1
    if mm[b] == 0:
        mm[b] = cnt
        cnt += 1
    if mm[c] == 0:
        mm[c] = cnt
        cnt += 1
    join(a, b)
    join(b, c)

ans = 0
for x in v:
    if check(x[0], x[1]):
        ans += 1

for x in v1:
    if not check(x[0], x[1]):
        ans += 1

print(ans)
