'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 14.09.2023 18:53:56
'''

a = input()
b = input()
if (a == b):
    print(-1)
else:
    print([len(a), len(b)][len(a) < len(b)])
