a = int(input())
b = list(map(int, input().split()))

c = []
for _ in range(a):
  c.append(_)
for i in range(len(b)):
    c[b[i]-1] = i+1
print(*c)