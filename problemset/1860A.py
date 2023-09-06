'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.09.2023 15:25:39
'''

t = int(input())


def rep(a):
    flag = False
    pr = a[0]
    for char in a[1:]:
        if (char == pr):
            flag = True
            break
        pr = char
    return flag


for _ in range(t):
    seq = input()
    if (seq == '()'):
        print("NO")
    else:
        print("YES")
        if (rep(seq)):
            print('()' * len(seq))
        else:
            print('(' * len(seq), ')' * len(seq), sep="")
