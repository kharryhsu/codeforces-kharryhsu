s = input()

result = ""
i = 0

while i < len(s):
    if s[i:i+3] == "WUB":
        if result and result[-1] != " ":
            result += " "
        i += 3
    else:
        result += s[i]
        i += 1

print(result.strip())