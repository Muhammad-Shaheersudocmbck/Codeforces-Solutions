c = []
d = []
for _ in range(int(input())):
  a,b = map(int, input().split())
  c.append(a)
  d.append(b)
x = int(input())
for i in range(len(c)):
  if (x<d[i] and x>c[i]) or (x==d[i] or x==c[i]):
    print((len(c)-(i+1))+1)