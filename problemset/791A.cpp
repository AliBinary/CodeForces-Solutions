/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 18:59:42
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, n = 0;
    cin >> a;
    cin >> b;
    while (a <= b)
    {
        n++;
        a *= 3;
        b *= 2;
    }

    cout << n;

    return 0;
}