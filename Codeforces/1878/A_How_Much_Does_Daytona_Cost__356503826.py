for i in range(int(input())):
  a,b = map(int, input().split())
  c = list(map(int, input().split()))
  if b in c:
    print("YES")
  else:
    print("NO")