matrix = []

for i in range(5):
    row = list(map(int, input().split()))
    
    matrix.append(row)
    
    if 1 in row:
        x = i
        y = row.index(1)

move = abs(x - 2) + abs(y - 2)

print(move)