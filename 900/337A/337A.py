n, m = map(int, input().split())
arr = sorted(map(int, input().split()))

print(min(arr[i + n - 1] - arr[i] for i in range(m - n + 1)))