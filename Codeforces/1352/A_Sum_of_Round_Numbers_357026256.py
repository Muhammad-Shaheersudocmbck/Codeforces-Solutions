for _ in range(int(input())):
    a = input()[::-1]
    b = list(a)
    ans  =[]
    for i in range(len(b)):
        if int(b[i])>0:
          ans.append(b[i]+"0"*i)
    print(len(ans))
    print(*ans)