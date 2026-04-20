for _ in range(int(input())):
  a,b = map(int, input().split())
  c = list(map(int, input().split()))
  if(sum(c)==b):
    print("YES")
  else:
    print("NO")