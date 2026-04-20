for i in range(int(input())):
  a,b = map(int, input().split())
  c,d = map(int, input().split())
  if (min(a,b)+min(c,d))==max(a,b) and max(a,b) == max(c,d):
    print("YES")
  else:
    print("NO")