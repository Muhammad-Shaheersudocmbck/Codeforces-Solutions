for i in range(int(input())):
  b = int(input())
  a = list(map(int, input().split()))
  ans = []
    
  for i in range(b-1):
    if (a[i]) > a[i+1]:
      ans.append(a[i])
      if (min((a[i]),(a[i+1]))) != 0:
        ans.append(min((a[i]),(a[i+1])))
      else:
        ans.append(1)
    else:
      ans.append(a[i])
  ans.append(a[-1])
  print(len(ans))
  print(*ans)