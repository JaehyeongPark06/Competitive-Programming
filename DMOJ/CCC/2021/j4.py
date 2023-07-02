s = input()
t = sorted(s)
count = [[0] * 99 for _ in range(99)]

for i in range(len(s)):
    count[ord(s[i])][ord(t[i])] += 1

total = len(s)
ans = 0

for a in ["L", "M", "S"]:
    total -= count[ord(a)][ord(a)]
    for b in ["L", "M", "S"]:
        if a > b:
            sub = min(count[ord(a)][ord(b)], count[ord(b)][ord(a)])
            total -= 2 * sub
            ans += sub

assert total % 3 == 0
ans += total // 3 * 2
print(ans)
