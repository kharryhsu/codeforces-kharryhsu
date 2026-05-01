s = input().strip()
letters = set()

for c in s:
    if 'a'<= c <= 'z':
        letters.add(c)
        
print(len(letters))