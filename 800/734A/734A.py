n = int(input())

s = input()

A_nums = 0
D_nums = 0

for c in s:
    if c == 'A':
        A_nums += 1
    else:
        D_nums += 1

if A_nums > D_nums:
    print("Anton")
elif A_nums < D_nums:
    print("Danik")
else:
    print("Friendship")