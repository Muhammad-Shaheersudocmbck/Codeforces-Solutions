for i in range(int(input())):
    a = int(input())
    b = list(map(int, input().split()))
    odd = 0
    even = 0
    for i in b:
        if i%2==0:
            even+=1
        else:
            odd+=1
    if odd==len(b) and odd%2==0:
        print("YES")
    elif even == len(b):
        print("YES")
    elif odd%2==0:
        print("YES")
    else:
        print("NO")