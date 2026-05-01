n = int(input())

curr = 0
min_cap = 0

for i in range(n):
    a, b = map(int, input().split())
    
    curr += b - a
    
    if curr > min_cap:
        min_cap = curr

print(min_cap)