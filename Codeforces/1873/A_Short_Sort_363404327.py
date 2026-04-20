for i in range(int(input())):
  a = input()
  if f'{a[-1]}{a[1]}{a[0]}' == 'abc':
    print("YES")
  
  elif f'{a[0]}{a[-1]}{a[1]}' == 'abc':
    print("YES")
  
  elif f'{a[1]}{a[0]}{a[-1]}' == 'abc':
    print("YES")
  elif a=='abc':
    print("YES")
  else:
    print("NO")