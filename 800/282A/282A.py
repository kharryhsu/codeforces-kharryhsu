T = int(input())

ans = 0

for i in range(T):
    op = input()
    
    if op == "++X" or op == "X++":
        ans += 1
    else:
        ans -= 1

print(ans)