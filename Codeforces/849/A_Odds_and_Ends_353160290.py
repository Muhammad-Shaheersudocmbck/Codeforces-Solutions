import math
a = int(input())
b = list(map(int, input().split()))

if (int(a/3) + (a-int(a/3))) %2!=0 and b[0] %2!=0 and b[-1]%2!=0:
  print("Yes")
else:
  print("No")