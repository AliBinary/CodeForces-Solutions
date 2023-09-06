'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.09.2023 15:24:56
'''

t = int(input())


def can(A, B, C, n):
    maxx = max([A, B, C])

    n -= maxx - A
    n -= maxx - B
    n -= maxx - C
    if (n < 0 or n % 3):
        print("NO")
    else:
        print("YES")


for i in range(t):
    str0 = input().split()
    (A, B, C, n) = [int(i) for i in str0]
    can(A, B, C, n)
