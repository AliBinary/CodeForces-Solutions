/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:04:36
*/

#include <iostream>
using namespace std;

int main()
{
    int n, index, even, odd, num, numbers[100];
    cin >> n;
    index = even = odd = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        numbers[i] = num;
    }
    bool numsAreEven = true;
    for (int i = 0; i < 3; i++)
    {
        if (numbers[i] % 2)
            odd++;
        else
            even++;
    }
    if (odd > even)
        numsAreEven = false;

    if (numsAreEven)
    {
        for (int i = 0; i < n; i++)
        {
            if (numbers[i] % 2)
            {
                index = i + 1;
                break;
            }
        }
    }
    else
        for (int i = 0; i < n; i++)
        {
            if (numbers[i] % 2 == 0)
            {
                index = i + 1;
                break;
            }
        }
    cout << index;
}