startSt, startDir = input().split()
N = int(input())

roads = {startSt: startDir}

for _ in range(N):
    known, new = input().split()
    if known in roads:
        if roads[known] == "ns":
            roads[new] = "ew"
        else:
            roads[new] = "ns"
    else:
        roads[known] = roads.get(known, "ns")
        roads[new] = roads.get(new, "ns")

nscount = sum(orient == "ns" for orient in roads.values())
ewcount = sum(orient == "ew" for orient in roads.values())

print(nscount, ewcount)
