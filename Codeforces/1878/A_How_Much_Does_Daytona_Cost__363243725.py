for i in range(int(input())):
  a,c = map(int, input().split())
  d = list(map(int, input().split()))
  if c in d:
    print("YES")
  else:
    print("NO")