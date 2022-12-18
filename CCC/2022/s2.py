# TLE 10/15
x = int(input())

rule_together = {}


for i in range(x):
    names = input().split(' ')
    rule_together.append(names)

y = int(input())
rule_seperate = {}
for i in range(y):
    names = input().split(' ')
    rule_seperate.append(names)

teams = {}
g = int(input())
for i in range(g):
    names = input().split(' ')
    teams.append(names)

result = 0

for rule in rule_together:
    name1 = rule[0]
    name2 = rule[1]
    for team in teams:
        if (name1 in team and name2 not in team) or (name2 in team and name1 not in team):
            result += 1
            break

for rule in rule_seperate:
    name1 = rule[0]
    name2 = rule[1]
    for team in teams:
        if name1 in team and name2 in team:
            result += 1
            break

print(result)
