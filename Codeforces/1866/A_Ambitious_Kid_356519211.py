a = int(input())
b = list(map(int, input().split()))

for i in range(len(b)):
  b[i] = abs(b[i])
print(min(b))