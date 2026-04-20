for i in range(int(input())):
  a = int(input())
  b = list(map(int, input().split()))
  c = b[:]
  d = max(b)
  c.remove(d)
  e = max(c)
  print(d+e)