for _ in range(int(input())):
  a,b = map(int, input().split())
  c = list(map(int, input().split()))
  
  if (a*b)%2==0 or ((a*b)==1 and c[0]%2!=0) or sum(c)%2!=0:
    print("YES")
  else:
    print("NO")