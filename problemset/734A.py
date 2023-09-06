'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.09.2023 15:24:32
'''

n = int(input())
s = input()

Anton = Danik = 0
for game in s:
    if game == 'A':
        Anton += 1
    else:
        Danik += 1

if Anton > Danik:
    print("Anton")
elif Anton < Danik:
    print("Danik")
else:
    print("Friendship")
