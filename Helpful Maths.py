# Link: https://codeforces.com/contest/339/problem/A

t = input()
c = 0

tt=sorted(t)
if "+" in tt:    
    tt.remove("+")

for x in t:
    if "+" in (x):
        c = c+1
        
print(*tt[c-1:],sep="+")
