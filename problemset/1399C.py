'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 11.09.2023 10:42:01
'''


def solve():
    n = int(input())
    w = list(map(int, input().split()))
    w.sort()
    ans = 0
    for s in range(2, 101):
        L, R = 0, n-1
        ct = 0
        while (L < R):
            if (w[L] + w[R] == s):
                ct += 1
                L += 1
                R -= 1
            elif (w[L] + w[R] > s):
                R -= 1
            else:
                L += 1
        ans = max([ct, ans])
    print(ans)


for _ in range(int(input())):
    solve()
