for _ in range(int(input())):
    a = list(input())
    b = list(input())
    c = list(input())
    d = list(input())
    e = list(input())
    f = list(input())
    g = list(input())
    h = list(input())
    i = list(input())
    j = list(input())

    grid = [a, b, c, d, e, f, g, h, i, j]
    ans = 0

    ans += a.count("X")
    ans += j.count("X")
    for r in range(1, 9):
        if grid[r][0] == "X":
            ans += 1
        if grid[r][9] == "X":
            ans += 1

    ans += b[1:-1].count("X") * 2
    ans += i[1:-1].count("X") * 2
    for r in range(2, 8):
        if grid[r][1] == "X":
            ans += 2
        if grid[r][8] == "X":
            ans += 2

    ans += c[2:-2].count("X") * 3
    ans += h[2:-2].count("X") * 3
    for r in range(3, 7):
        if grid[r][2] == "X":
            ans += 3
        if grid[r][7] == "X":
            ans += 3

    ans += d[3:-3].count("X") * 4
    ans += g[3:-3].count("X") * 4
    for r in range(4, 6):
        if grid[r][3] == "X":
            ans += 4
        if grid[r][6] == "X":
            ans += 4

    if e[4] == "X": ans += 5
    if e[5] == "X": ans += 5
    if f[4] == "X": ans += 5
    if f[5] == "X": ans += 5

    print(ans)
