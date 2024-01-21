/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:01:37
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int n, k, ans;
    cin >> n;
    cin >> k;

    if (k <= ceil(n / 2.))
        ans = k * 2 - 1;
    else
    {
        k = k - ceil(n / 2.);
        ans = k * 2;
    }
    cout << ans;
}