s = input()

flag = False

for c in s:
    if c in "HQ9":
        flag = True
        break
    
if flag == True:
    print("YES")
else:
    print("NO")