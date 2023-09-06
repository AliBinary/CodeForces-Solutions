'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.09.2023 15:25:05
'''

t = int(input())

for i in range(t):
    str0 = input().split()
    (n, m, x, y) = [int(i) for i in str0]

    if (y < 2*x):
        double = y
    else:
        double = 2*x
    single = x
    price = 0

    for j in range(n):
        flag = False
        row = input()
        for k in row:
            if (flag and (k == '.')):
                price += double
                flag = False
            elif (flag):
                price += single
                flag = False
            elif (k == '.'):
                flag = True
        if (flag):
            price += single
    print(price)
