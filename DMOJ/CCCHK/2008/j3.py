N = int(input())

phone_book = {}

for _ in range(N):
    name, phone_number = input().split()
    phone_book[phone_number] = name

D = int(input())

frequency = {}
max_count = 0
smallest_number = float('inf')

for _ in range(D):
    dialed_number = input().strip()
    if dialed_number in frequency:
        frequency[dialed_number] += 1
    else:
        frequency[dialed_number] = 1

    if frequency[dialed_number] > max_count:
        max_count = frequency[dialed_number]
        smallest_number = dialed_number
    elif frequency[dialed_number] == max_count and dialed_number < smallest_number:
        smallest_number = dialed_number

favorite_person = phone_book[smallest_number]

print(favorite_person)
