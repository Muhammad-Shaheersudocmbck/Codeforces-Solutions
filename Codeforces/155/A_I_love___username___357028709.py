a = int(input())
b = list(map(int, input().split()))

ans = 0

for i in range(1,a):
  if max(b[:i]) < b[i] and b[i] not in b[:i-1]:
    ans+=1
  elif min(b[:i]) > b[i] and b[i] not in b[:i-1]:
    ans+=1
print(ans)