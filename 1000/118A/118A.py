s = input()

vowels = "aoyeuiAOYEUI"
result = ""

for c in s:
    if c not in vowels:
        result += '.' + c.lower()
        
print(result)