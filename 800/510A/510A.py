n, m = map(int, input().split())

for i in range(n):
    for j in range(m):
        if (i + 1) % 2 == 0:
            if ((i + 1) // 2) % 2 == 1:
                print("#" if j == m - 1 else ".", end="\n" if j == m - 1 else "")
            else:
                if j == 0:
                    print("#", end="")
                else:
                    print(".", end="\n" if j == m - 1 else "")
        else:
            print("#", end="\n" if j == m - 1 else "")
