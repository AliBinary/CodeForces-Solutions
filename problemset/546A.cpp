/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:06:57
*/

#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k;
    cin >> n;
    cin >> w;

    for (int i = 1; i <= w; i++)
        n -= i * k;

    if (n < 0)
        cout << abs(n);
    else
        cout << 0;

    return 0;
}