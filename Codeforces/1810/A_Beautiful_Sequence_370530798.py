for i in range(int(input())):
  a = int(input())
  b = list(map(int, input().split()))
  for j in range(len(b)):
    if(j+1 >= (b[j])):
      print("YES")
      break
  else:
    print("NO")