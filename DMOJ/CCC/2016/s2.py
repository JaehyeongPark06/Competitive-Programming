import sys

C = int(sys.stdin.readline())
N = int(sys.stdin.readline())
list1 = []
list2 = []

S1 = sys.stdin.readline().rstrip().split(" ")
S2 = sys.stdin.readline().rstrip().split(" ")

for i in range(N):
    list1.append(int(S1[i]))
    list2.append(int(S2[i]))

list1.sort()
list2.sort()

total = 0

if C == 1:
    for i in range(N):
        total += max(list1[i], list2[i])
else:
    for i in range(N):
        total += max(list1[i], list2[N - i - 1])

print(total)
