n = int(input())

temp = ""
curr = ""
ans = 0

for i in range(n):
    curr = input()
    
    if curr != temp:
        temp = curr
        ans += 1

print(ans)