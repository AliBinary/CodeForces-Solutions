/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:04:25
*/

#include <iostream>
using namespace std;

int main()
{
    int k, l, m, n, d, unharmed;
    cin >> k;
    cin >> l;
    cin >> m;

    cin >> d;

    for (int i = 1; i <= d; i++)
    {
        if (i % k && i % l && i % m && i % n)
            unharmed++;
    }
    cout << d - unharmed;
}