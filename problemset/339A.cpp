/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:03:48
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string input;
    cin >> input;
    const int n = input.length();
    char nums[n];

    for (int i = 0; i < n; i++)
        nums[i] = input[i];

    sort(nums, nums + n);
    cout << nums[(int)n / 2];
    for (int i = (n / 2) + 1; i < n; i++)
        cout << '+' << nums[i];
}