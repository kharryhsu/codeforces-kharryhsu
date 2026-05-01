k, n, w = map(int, input().split())
sum = 0

for i in range(1, w + 1):
    sum += k * i
    
borrow_money = sum - n

if borrow_money < 0:
    print(0)
else:
    print(borrow_money)