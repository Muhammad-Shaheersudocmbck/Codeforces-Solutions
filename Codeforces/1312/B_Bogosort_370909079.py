for _ in range(int(input())):
    a = int(input())
    b = list(map(int, input().split()))
    b.sort()
    b.reverse()
    print(*b)