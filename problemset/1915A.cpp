/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 18.01.2024 14:26:04
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a[3] = {};
        for (int j = 0; j < 3; j++)
        {
            cin >> a[j];
        }

        if (a[0] == a[1])
            cout << a[2] << '\n';
        else if (a[0] == a[2])
            cout << a[1] << '\n';
        else
            cout << a[0] << '\n';
    }
}