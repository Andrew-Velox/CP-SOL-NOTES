tt = input()

r = tt[1:].replace("s","$")
t = r.replace("i","!")
v = t.replace("o","()")

rr = tt[0].upper()

print(rr+v+".")
