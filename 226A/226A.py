n = int(input())
s = input()
track_duplicate = 0

for i in range(1, len(s)):
    if s[i] == s[i - 1]:
        track_duplicate += 1

print(track_duplicate)