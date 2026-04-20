for _ in range(int(input())):
  a,b = map(int, input().split())
  c = ""
  i = 0
  while(a!=0 or b!=0):
    if(i%2==0 and b>0):
      c+="1"
      b-=1
    elif (a>0):
      c+="0"
      a-=1
    i+=1
  print(c)