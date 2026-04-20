a = int(input())
b = list(map(int, input().split()))
maxx = 0
minn = 0
if abs(b[::-1].index(min(b))-(len(b)-1))<b.index(max(b)):
  maxx = b.index(max(b))
  minn = b[::-1].index(min(b))-1
else:
  maxx = b.index(max(b))
  minn = b[::-1].index(min(b))
print(maxx+minn)