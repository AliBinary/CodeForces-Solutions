'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.09.2023 15:20:19
'''

s = input()

sum = 0
for char in s:
    if char.isupper():
        sum += 1
if sum > 0.5 * len(s):
    print(s.upper())
else:
    print(s.lower())
