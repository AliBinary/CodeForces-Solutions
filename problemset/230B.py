'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 10.09.2023 14:11:22
'''

n = 10**6
A = [1]*n
B = set()
for x in range(2, n):
    if A[x]:
        B.add(x*x)
        for m in range(x, n, x):
            A[m] = 0

input()
for k in map(int, input().split()):
    print(["NO", "YES"][k in B])
