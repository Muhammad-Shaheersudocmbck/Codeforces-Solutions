for i in range(int(input())):
  a = int(input())
  b = [1]
  odd = 1 
  for i in range(1,a):
    b.append(odd*(odd+2))
    odd+=2
  print(*b)