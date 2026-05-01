n = int(input())

for i in range(n):
    if i % 2 == 1:
        print("I love ", end='')
    else:
        print("I hate ", end='')
    
    if i == (n - 1):
        print("it")
    else:
        print("that ", end='')