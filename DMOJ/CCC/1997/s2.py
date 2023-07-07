t = int(input())
for _ in range(t):
    n = int(input())
    mp = {}
    ans = False
    for j in range(1, int(n**0.5) + 1):
        if n % j == 0:
            mp[j + n // j] = 1
    for j in range(1, int(n**0.5) + 1):
        if n % j == 0 and mp.get(n // j - j, 0) == 1:
            ans = True
            break
    print(n, end="")
    if ans:
        print(" is nasty")
    else:
        print(" is not nasty")
