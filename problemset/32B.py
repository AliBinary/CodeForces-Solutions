'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.09.2023 15:19:57
'''

text = input()
index = 0
while (index < len(text)):
    if (text[index] == '.'):
        index += 1
        print(0, end="")
    elif (text[index] == '-'):
        index += 1
        if (text[index] == '-'):
            index += 1
            print(2, end="")
        elif (text[index] == '.'):
            index += 1
            print(1, end="")
