N, M, K = map(float, input().split())

seq = [0] * int(N)
seq[0] = 1
K -= N

for i in range(1, int(M)):
    if K - i >= 0 and i < N:
        seq[i] = i + 1
        K -= i
    else:
        break

checkpoint = seq.index(0) if 0 in seq else int(N)

for i in range(checkpoint, int(N)):
    if K > 0:
        for j in range(int(M), 0, -1):
            if K - j + 1 >= 0:
                seq[i] = seq[i - j]
                K -= j - 1
                break
    else:
        seq[i] = seq[i - 1]

if K == 0:
    print(*seq)
else:
    print(-1)
