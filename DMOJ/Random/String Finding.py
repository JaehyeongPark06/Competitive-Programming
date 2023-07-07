def prefix(T):
    table = [0] * len(T)
    j = 0
    for i in range(1, len(T)):
        if T[i] == T[j]:
            j += 1
            table[i] = j
        else:
            if j != 0:
                j = table[j - 1]
                i -= 1
            else:
                table[i] = 0

    return table


def kmp(string, T):
    table = prefix(T)
    i = j = 0
    while i < len(string):
        if string[i] == T[j]:
            i += 1
            j += 1

            if j == len(T):
                return i - j

        else:
            if j != 0:
                j = table[j - 1]
            else:
                i += 1

    return -1  # not found


S = input()
T = input()

print(kmp(S, T))
