t = int(input())
p = [input().strip() for _ in range(t)]

n = int(input())
q = [input().strip() for _ in range(n)]

pref = {question: index + 1 for index, question in enumerate(p)}

sorted_q = sorted(enumerate(q), key=lambda x: pref.get(x[1], float('inf')))

sorted_indices = [index + 1 for index, _ in sorted_q]

for index in sorted_indices:
    print(index)