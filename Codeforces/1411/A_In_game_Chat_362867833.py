for i in range(int(input())):
  a = int(input())
  b = input()
  for j in range(len(b)):
    if b[j:].count(')') == len(b[j:]):
      if len(b[:j]) < len(b[j:]):
        print("YES")
        break
  else:
    print("NO")
  