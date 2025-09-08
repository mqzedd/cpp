alphabet = []
for i in range(26):
    alphabet.append(i)
a, b, c = 0,0,0
for i in alphabet:
    for j in alphabet:
        for k in alphabet:
            if i <5:
                a+= 1
                c+= 1
                
            if j <5:
                a+= 1
                
            if k <5:
                a+= 1
            if (i+j+k) % 3 ==0:
                b += 1
it = int(input())
for i in range(it):
    f,d,e = [int(i) for i in input().split(' ')]
    number = (a* f / 17576 + b*d / 17576 + c*e/17576)
    print(f"{number:.2f}")
