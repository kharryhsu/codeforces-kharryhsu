n, k = map(int, input().split())

for i in range(k, 0, -1):
    if n % 10 != 0:
        n -= 1
    else:
        n //= 10

print(n)