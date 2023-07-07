import math


def perfect():
    for i in range(1000, 10000):
        divisors = []
        for j in range(1, int(math.sqrt(i)) + 1):
            if i % j == 0:
                divisors.append(j)
                divisors.append(i // j)
        divisors.remove(i)
        if sum(divisors) == i:
            print(i, end=" ")


def cube():
    for i in range(100, 1000):
        if i == sum([int(j) ** 3 for j in str(i)]):
            print(i, end=" ")


perfect()
print()
cube()
