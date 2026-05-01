def is_distinct_digit(num1, num2) -> bool:
    return len(set(str(num2))) == len(str(num1))

y = int(input())
new_y = y

while True:
    new_y += 1
    
    if is_distinct_digit(y, new_y):
        break

print(new_y)