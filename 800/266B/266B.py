n, t = map(int, input().split())
s = input()
s = list(s)

for _ in range(t):
    i = 1
    while i < len(s):
        if s[i - 1] == 'B' and s[i] == 'G':
            s[i - 1], s[i] = s[i], s[i - 1]
            i += 1
        i += 1

print(''.join(s))