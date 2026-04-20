from collections import Counter

for i in range(int(input())):
  a = int(input())
  b = list(set(map(int, input().split())))
  c = sorted(b)
  for j in range(len(b)):
    if c[j]>= len(b):
      print(c[j])
      break