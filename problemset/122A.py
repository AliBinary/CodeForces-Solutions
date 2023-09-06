'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.09.2023 15:21:05
'''

n = int(input())


def lucky(n):
    n = str(n)
    flag = True
    for i in range(len(n)):
        if not (n[i] == '4' or n[i] == '7'):
            flag = False
            break
    return flag


ans = "NO"
if lucky(n):
    ans = "YES"
else:
    for num in range(4, n):
        if n % num == 0:
            if lucky(num):
                ans = "YES"
                break
print(ans)
