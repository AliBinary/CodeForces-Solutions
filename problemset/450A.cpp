/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 28.01.2024 19:24:14
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int last;
    while (1)
    {
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                continue;
            else if (a[i] <= m)
            {
                a[i] = 0;
                last = i;
                flag = false;
            }
            else
            {
                a[i] -= m;
                last = i;
                flag = false;
            }
        }
        if (flag)
            break;
    }
    cout << last + 1;
}