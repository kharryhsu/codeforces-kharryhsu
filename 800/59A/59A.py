s = input()

lower = 0
upper = 0

for c in s:
    if c.islower():
        lower += 1
    if c.isupper():
        upper += 1
        
if lower > upper:
    print(s.lower())
elif lower < upper:
    print(s.upper())
else:
    print(s.lower())