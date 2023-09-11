'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 11.09.2023 10:32:59
'''

t = int(input())
for _ in range(t):
    A = set()
    n = int(input())
    s = input()
    balloons = 0
    for char in s:
        if (char in A):
            balloons += 1
        else:
            balloons += 2
            A.add(char)
    print(balloons)
