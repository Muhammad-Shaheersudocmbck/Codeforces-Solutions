print((lambda a, b: 12*a + 14*a*b + abs(a - b) + (a - 3*b) * b + 2)(*map(int, input().split())))
