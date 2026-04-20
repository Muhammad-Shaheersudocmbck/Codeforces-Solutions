import sys
input = sys.stdin.readline

for i in range(int(input())):
    a = int(input())
    b = list(map(int, input().split()))
    c = []
    if len(set(b)) == 1:
        print(-1)
    else:
        d = max(b)
        for i in range(b.count(d)):
            c.append(d)
            b.remove(d)
        print(len(b), len(c))
        print(*b)
        print(*c)