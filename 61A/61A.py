s1 = input()
s2 = input()

for a, b in zip(s1, s2):
    print(int(a) ^ int(b), end='')

print('')