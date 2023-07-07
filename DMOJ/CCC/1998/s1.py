def replace(string):
    words = string.split()
    for i in range(len(words)):
        if len(words[i]) == 4:
            words[i] = "****"
    return ' '.join(words)


N = int(input())

for i in range(N):
    string = input()
    print(replace(string))