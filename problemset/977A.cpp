/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:09:00
*/

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    cin >> k;

    for (k; k > 0; k--)
    {
        if (n % 10 == 0)
            n = n / 10;
        else
            n--;
    }
    cout << n;
}