'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.09.2023 15:24:04
'''

s = list(map(int, input().split()))
sett = set(s)

ans = 0
for num in sett:
    if (s.count(num) > 1):
        ans += s.count(num) - 1
print(ans)
