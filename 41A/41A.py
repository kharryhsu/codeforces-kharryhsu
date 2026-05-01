s1 = input()
s2 = input()

if s1 == s2[::-1] and len(s1) == len(s2):
    print("YES")
else:
    print("NO")