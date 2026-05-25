import math
a = input()
b = input().split()
f = b[0]
s = b[1]
num1 = 0
num2 = 0
for i,j in enumerate(f):
    num1 += (ord(j) - ord('a')) * pow(26,a-i)
for i,j in enumerate(s):
    num2 += (ord(j) - ord('a')) * pow(26,a-i)
num1 += num2
num1 = math.floor(num1/2)
for(    )

