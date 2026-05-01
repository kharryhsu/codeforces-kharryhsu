s = input()

count = 0
flag = True

for c in s:
    if c == '4' or c == '7':
        count += 1

count = str(count)

for c in count:
    if c != '4' and c != '7':
        flag = False
        break
    
print("YES" if flag == True else "NO")