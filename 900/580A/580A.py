n = int(input())
arr = list(map(int, input().split()))

best = cur = 1

for i in range(1, n):
    if arr[i] >= arr[i - 1]:
        cur += 1
    else:
        cur = 1
    best = max(best, cur)

print(best)