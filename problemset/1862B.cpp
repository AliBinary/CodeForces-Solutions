/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 19.01.2024 13:12:36
*/

#include <iostream>
using namespace std;

int main()
{
    int t, n, temp, a[400000];
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int x = 1;
        cin >> a[0];

        for (int j = 1; j < n; j++)
        {
            cin >> temp;

            if (a[x - 1] <= temp)
                a[x++] = temp;
            else
            {
                a[x++] = 1;
                a[x++] = temp;
            }
        }

        cout << x << endl;
        for (int i = 0; i < x; i++)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
}