import sys


def check(a, b):
    freq = [0] * 26
    for x in a:
        if x != " ":
            freq[ord(x.upper()) - ord("A")] += 1
    for x in b:
        if x != " ":
            freq[ord(x.upper()) - ord("A")] -= 1
    for x in freq:
        if x:
            return False
    return True


a = sys.stdin.readline().strip()
while not a:
    a = sys.stdin.readline().strip()
b = sys.stdin.readline().strip()
while not b:
    b = sys.stdin.readline().strip()

if check(a, b):
    print("Is an anagram.")
else:
    print("Is not an anagram.")
