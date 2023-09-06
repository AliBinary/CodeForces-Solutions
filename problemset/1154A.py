'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.09.2023 15:24:41
'''

nums = input()
L = [int(i) for i in nums.split()]
L = sorted(L)
a = L[3] - L[0]
b = L[3] - L[1]
c = L[3] - L[2]
print(a, b, c)
