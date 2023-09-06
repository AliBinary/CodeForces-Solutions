'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.09.2023 15:21:12
'''

n = int(input())
p = input().split()
sum = 0
for i in range(n):
    sum += int(p[i])
ans = sum / n
print(ans)
