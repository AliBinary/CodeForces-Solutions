/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:06:45
*/

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int array[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        array[k] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << array[i] << ' ';
    }
}