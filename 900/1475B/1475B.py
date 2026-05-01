for _ in range(int(input())):
    n = int(input())

    k = n // 2020
    r = n % 2020

    print("YES" if k >= r else "NO")