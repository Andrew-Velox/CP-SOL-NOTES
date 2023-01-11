# Link : https://codeforces.com/contest/59/problem/A

take = input()
up = 0
low = 0

for x in take:
    
    if x.isupper():
        up = up+1
    if x.islower():
        low = low +1

if up < low:
    print(take.lower())    
elif up == low:
    print(take.lower())
elif up>low:
    print(take.upper())
