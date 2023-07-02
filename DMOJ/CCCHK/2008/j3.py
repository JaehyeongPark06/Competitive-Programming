N = int(input())

phones = {}

for _ in range(N):
    name, phNum = input().split()
    phones[phNum] = name

D = int(input())

freq = {}
max_count = 0
snum = float('inf')

for _ in range(D):
    num = input().strip()
    if num in freq:
        freq[num] += 1
    else:
        freq[num] = 1

    if freq[num] > max_count:
        max_count = freq[num]
        snum = num
    elif freq[num] == max_count and num < snum:
        snum = num

print(phones[snum])
