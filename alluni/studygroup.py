a = int(input())
d = {}
studying = set()

for i in range(a):
    name,b = input().split()
    friends = input().split()
    d[name] = friends
studying.add(list(d.keys())[0])

for i in range(6):
    temp = set()
    for j in studying:
        for k in d[j]:
            if k not in studying:
                temp.add(k)
    studying.update(temp)
print(len(studying))