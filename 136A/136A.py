n = int(input())

p = list(map(int, input().split()))

res = [0] * n

for i in range(n):
    recv = p[i]
    res[recv - 1] = i + 1
    
print(*res)