n = int(input())
arr = list(map(int, input().split()))

maxH = max(arr)
minH = min(arr)

maxIndex = arr.index(maxH)
minIndex = len(arr) - 1 - arr[::-1].index(minH)

swaps = maxIndex + (n - 1 - minIndex)

if maxIndex > minIndex:
    swaps -= 1

print(swaps)