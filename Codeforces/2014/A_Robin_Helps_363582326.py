for _ in range(int(input())):
  a,b = map(int, input().split())
  c = list(map(int, input().split()))
  k = 0
  gold = 0
  for i in c:
    if i == 0 and gold >0:
      k+=1
      gold-=1
    elif i>=b:
      gold+=i
  print(k)