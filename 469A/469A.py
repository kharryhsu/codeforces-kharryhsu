n = int(input())

levels = set()

_, *x = map(int, input().split())

levels.update(x)

_, *y = map(int, input().split())

levels.update(y)

print("I become the guy." if len(levels) == n else "Oh, my keyboard!")