'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.09.2023 15:25:20
'''

t = int(input())
for i in range(int(input())):
    (a, b, c) = list(map(int, input().split()))

    if (a > b):
        print("First")
    elif (a < b):
        print("Second")
    else:
        if (c % 2):
            print("First")
        else:
            print("Second")
