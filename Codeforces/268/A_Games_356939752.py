ans = 0
ls = []
for _ in range(int(input())):
  a,b = map(int, input().split())
  ls.append([a,b])
for i in range(len(ls)):
  for j in range(len(ls)):
    if ls[i][0] == ls[j][1] and i!=j:
      ans+=1
print(ans)