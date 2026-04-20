import sys
input = sys.stdin.readline

for i in range(int(input())):
    a,b,c = map(int, input().split())
    if  c%2!=0:
        if b>a:
            print("Second")
        else:
            print("First")
    else:

        if c%2==0 and a>b:
            print("First")
        else:
            print("Second")