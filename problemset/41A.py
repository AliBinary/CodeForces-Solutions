'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.09.2023 15:20:11
'''

t = input()
s = input()

t1 = list(reversed(t))
t2 = ''
for i in t1:
    t2 += i

if s == t2:
    print("YES")
else:
    print("NO")
