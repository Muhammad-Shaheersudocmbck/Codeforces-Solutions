a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())
ans = 0
for i in range(1,e+1):
  if i%a==0 or i%b==0 or i%c==0 or i%d==0:
    ans+=1
print(ans)