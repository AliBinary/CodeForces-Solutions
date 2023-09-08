'''
    author:  AliTitan051
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.09.2023 22:32:17
'''

t = int(input())
for _ in range(t):
    nums = list(map(int, input().split()))
    ans = 0
    for i in range(1, 4):
        if (nums[i] > nums[0]):
            ans += 1
    print(ans)
