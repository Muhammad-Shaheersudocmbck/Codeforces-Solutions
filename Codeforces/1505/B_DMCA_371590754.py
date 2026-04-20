def sums(a):
  ans = 0
  for i in a:
    ans+=int(i)
  return ans
a = list(input())
while(len(a)>1):
  a = list(str(sums(a)))
print(*a)