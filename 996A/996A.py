n = int(input())

denominations = [100, 20, 10, 5, 1]
count = 0

for i in denominations:
    count += n // i
    n %= i
    
print(count)