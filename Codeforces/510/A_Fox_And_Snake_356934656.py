a,b = map(int, input().split())
lr = "R"
for i in range(a):
  if i%2==0:
    print("#"*b)
  else:
    if lr =="R":
      print("."*(b-1)+"#")
      lr = "L"
    else:
      lr = "R"
      print("#"+"."*(b-1))