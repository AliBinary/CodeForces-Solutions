'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.09.2023 15:25:31
'''

t = int(input())


def ok(num, b):
    flag = False
    for digit in b:
        if (digit % num == 0):
            flag = True
            break
    return flag


for i in range(t):
    b = []
    c = []
    n = int(input())
    nums = input().split()
    nums = [int(i) for i in nums]
    nums = sorted(nums)
    b.append(nums[0])
    for j in range(1, n):
        if (ok(nums[j], b)):
            b.append(nums[j])
        else:
            c.append(nums[j])

    if (len(c)):
        print(len(b), len(c))
        for i in b:
            print(i, end=" ")
        print()
        for i in c:
            print(i, end=" ")
        print()
    else:
        print("-1")
