def vowel(c):
    vowels = ["a", "e", "i", "o", "u"]
    return c in vowels


def strip(a):
    ret = ""
    while a and not vowel(a[-1]) and a[-1] != " ":
        ret += a[-1]
        a = a[:-1]
    if a and a[-1] != " ":
        ret += a[-1]
    return ret[::-1]


def rhyme(a, b):
    a = a.lower()
    b = b.lower()
    return strip(a) == strip(b)


n = int(input())
while n > 0:
    a = input().strip()
    while not a:
        a = input().strip()
    b = input().strip()
    while not b:
        b = input().strip()
    c = input().strip()
    while not c:
        c = input().strip()
    d = input().strip()
    while not d:
        d = input().strip()

    ab = rhyme(a, b)
    bc = rhyme(b, c)
    cd = rhyme(c, d)
    da = rhyme(a, d)
    ac = rhyme(a, c)
    bd = rhyme(b, d)

    if ab and bc and cd:
        print("perfect")
    elif ab and cd:
        print("even")
    elif ac and bd:
        print("cross")
    elif da and bc:
        print("shell")
    else:
        print("free")

    n -= 1
