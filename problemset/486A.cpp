/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:00:51
*/

#include <iostream>
using namespace std;

int main()
{
    long long int n, f = 0;

    cin >> n;
    if (n % 2)
        f = n / 2 * -1 - 1;
    else
        f = n / 2;

    cout << f;
}