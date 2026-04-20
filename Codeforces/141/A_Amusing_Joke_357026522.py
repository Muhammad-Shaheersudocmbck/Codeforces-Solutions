a = input()
b = input()
c = sorted(input())
if str(sorted(a+b)) in str(c):
  print("YES")
else:
  print("NO")