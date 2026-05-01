x = int(input())

steps = 0
size = [5, 4, 3, 2, 1]

for i in size:
    steps += x // i
    x %= i
    
print(steps)