info = input()
i = info.find(" ")

s = int(info[:i])
n = int(info[i + 1 :])

d = ("Sun", "Mon", "Tue", "Wed", "Thr", "Fri", "Sat")
for x in d:
    if x == "Sat":
        print(x, end="")
    else:
        print(x, end=" ")

p = s * 4 - 5

if s == 1:
    print("\n" + p * " ", end=2 * " ")
else:
    print("\n" + p * " ", end=3 * " ")

e = 8 - s
r = 0

for x in range(1, n + 1):
    if x == n:
        print(x, end="")

    else:
        if x % (e + 7 * r) == 0:
            print(x)
            if x < 9:
                print(2 * " ", end="")
            else:
                print(" ", end="")
            r += 1

        else:
            if x < 9:
                print(x, end=3 * " ")
            else:
                print(x, end=2 * " ")

print()
