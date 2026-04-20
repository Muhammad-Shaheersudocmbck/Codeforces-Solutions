for i in range(int(input())):
  a,b = map(int, input().split())
  c = input()
  d = input()
  ans =0
  for j in range(10):
    if d in c:
      print(ans)
      break
    ans+=1
    c+=c
  else:
    print(-1)