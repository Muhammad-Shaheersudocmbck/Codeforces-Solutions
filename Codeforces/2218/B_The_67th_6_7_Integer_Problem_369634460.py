for i in range(int(input())):
  a = list(map(int, input().split()))
  a.sort()
  sums  =0
  for j in range(7):
    if j<=5:
      sums+=(-1*(a[j]))
    else:
      sums+=(a[j])
  print(sums)