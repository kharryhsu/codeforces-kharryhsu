s = list(input())
duplicate = 0
flag = False

for i in range(1, len(s)):
    if s[i - 1] == s[i]:
        duplicate += 1
    else:
        duplicate = 0
        
    if duplicate == 6:
        flag = True
        break

if flag == True:
    print("YES")
else:
    print("NO")