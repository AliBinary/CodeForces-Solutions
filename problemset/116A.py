'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.09.2023 15:20:57
'''

n = int(input())

now = int(input().split()[1])
min = now

for i in range(n-1):
    line = input()
    a = int(line.split()[0])
    b = int(line.split()[1])
    now = now - a + b
    if now > min:
        min = now

print(min)
