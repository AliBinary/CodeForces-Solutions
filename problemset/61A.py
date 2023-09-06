'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.09.2023 15:20:26
'''

num = input()
num1 = int(num, 2)
num2 = int(input(), 2)


print(str(bin(num1 ^ num2))[2:].zfill(len(num)))
