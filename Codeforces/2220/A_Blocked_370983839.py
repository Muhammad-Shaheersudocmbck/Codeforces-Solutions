for _ in range(int(input())):
  a = int(input())
  b = list(map(int, input().split()))
  ok = True
  for i in range(a):
    if(b[i] in b[:i]):
      print(-1)
      ok = False
      break
  else:
    b.sort()
    b.reverse()  
    print(*b)