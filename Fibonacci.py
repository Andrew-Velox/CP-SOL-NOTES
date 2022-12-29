us = int(input())
a = 0
b = 1
for x in range(us):
    t = b
    sum = a+b
    a = b
    b = sum
    #print(b)
    if b == 0:
        break          
print(t)
