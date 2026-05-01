n = int(input())

print("HARD" if any(x != 0 for x in map(int, input().split())) else "EASY")