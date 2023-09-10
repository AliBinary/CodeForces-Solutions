'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 10.09.2023 23:33:09
'''

n = int(input())
for i in range(n):
    if (i % 2 == 0):
        if (i == n-1):
            print("I hate it", end=" ")
        else:
            print("I hate that", end=" ")
    else:
        if (i == n-1):
            print("I love it", end=" ")
        else:
            print("I love that", end=" ")
