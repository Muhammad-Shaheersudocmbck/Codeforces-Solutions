a,c = map(int, input().split())
b = list(input())
swapped = []

for _ in range(c):
  doswapped = []
  for i in range(1,len(b)):
    if b[i-1] == "B" and b[i] == "G" and i not in doswapped and i-1 not in doswapped:
      b[i-1], b[i] = b[i], b[i-1]
      doswapped.append(i-1)
      doswapped.append(i)
      swapped.append(i-1)
if len(b)>=2:
  if b[-2] =='B' and b[-1] == 'G':
    b[-2], b[-1] = b[-1], b[-2]
print(''.join(b))