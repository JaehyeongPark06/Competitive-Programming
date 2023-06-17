con = "bcdfghjklmnpqrstvwxyz"
closest = "aaeeeiiiiooooouuuuuuu"
next = "cdfghjklmnpqrstvwxyzz"

word = input()
newword = ""
for x in word:
    j = con.find(x)
    newword += x
    if j > -1:
        newword = newword + closest[j] + next[j]
print(newword)
