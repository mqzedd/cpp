a = input()
b = input()
c = ''
for i,j in enumerate(b):
    if((i+1)%3 == 0):
        c += j.upper()
    else:
        c += j
print(c)
    