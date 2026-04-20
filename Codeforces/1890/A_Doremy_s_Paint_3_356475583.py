from collections import Counter

for _ in range(int(input())):
  n = int(input())
  a = list(map(int,input().split()))
  c = list(Counter(a).values())
  if(len(set(a)))>=3:
    print("NO")
  else:
    if len(set(a))==1 or ((n&1 and abs(c[0]-c[-1])==1)) or (n%2==0 and abs(c[0]-c[-1]==0)):
      print("YES")
    else:
      print("NO")