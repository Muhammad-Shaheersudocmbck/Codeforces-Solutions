import sys
input = sys.stdin.readline

def check(mid, arr, a, b):
    ans = 0
    for i in arr:
        val = i + (mid + mid)
        ans += val * val
        if ans > b:
            return False
    return True

def idk(arr, a, b):
    l, r = 1, 10**18
    ans = -1
    while l <= r:
        mid = l + (r - l) // 2
        if check(mid, arr, a, b):
            ans = mid
            l = mid + 1
        else:
            r = mid - 1
    return ans

def solve():
    a, b = map(int, input().split())
    arr = list(map(int, input().split()))
    ans = idk(arr, a, b)
    print(ans)
tc = int(input())
for _ in range(tc):
    solve()
