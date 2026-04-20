int(input())
a = list(map(int, input().split()))
police = 0
ans = 0
for i in a:
  if i==-1 and police<=0:
    ans+=1
  elif i>0:
    police+=i
  elif i==-1 and police>0:
    police-=1
print(ans)