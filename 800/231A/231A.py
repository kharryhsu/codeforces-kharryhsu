T = int(input())

ans = 0

for i in range(T):
    l, m, n = map(int, input().split())
    
    if l + m + n >= 2:
        ans += 1

print(ans)