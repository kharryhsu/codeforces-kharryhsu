n, k = map(int, input().split())
scores = list(map(int, input().split()))

threshold = scores[k - 1]

num_pass = sum(1 for score in scores if score >= threshold and score > 0)

print(num_pass)