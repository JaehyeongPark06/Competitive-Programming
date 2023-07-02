from math import gcd

MXM = 10**5 + 1

cnt = [[0] * 200 for _ in range(MXM)]
ans = 0
f = 0

n, m = map(int, input().split())
s = input()
t = input()

if len(s) < len(t):
    s, t = t, s
    n, m = m, n

gcdVal = gcd(len(s), len(t))
lcm = len(s) * len(t) // gcdVal

for i in range(len(s)):
    cnt[i % gcdVal][ord(s[i])] += 1

for i in range(len(t)):
    ans += cnt[i % gcdVal][ord(t[i])]

f = n // (len(t) // gcdVal)

print(ans * f)
