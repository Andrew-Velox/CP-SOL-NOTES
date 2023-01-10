w = int(input())

for x in range(w):
    tt = input()    
    
    if len(tt) >10:
        res = (tt[:][0]+str(len(tt[:][1:-1]))+tt[:][-1])
        print(res)
    
    else:
        print(tt)
