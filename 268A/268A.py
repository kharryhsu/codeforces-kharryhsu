n = int(input())

h = []
a = []

for _ in range(n):
    hi, ai = map(int, input().split())
    
    h.append(hi)
    a.append(ai)

count = sum(
    1
    for i in range(n)
    for j in range(n)
    if i != j and h[i] == a[j]
)

print(count)