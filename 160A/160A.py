n = int(input())
arr = list(map(int, input().split()))

sum_nums = sum(arr)
half_sum = sum_nums // 2
sorted_number = sorted(arr, reverse=True)
num_coins = 0

sum_nums = 0

for num in sorted_number:
    sum_nums += num
    num_coins += 1
    
    if sum_nums > half_sum:
        break

print(num_coins)