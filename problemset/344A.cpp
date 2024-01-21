/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:04:49
*/

#include <iostream>
using namespace std;

int main()
{
    int n, j, x, ans = 1;
    cin >> n;

    cin >> x;
    for (int i = 1; i < n; i++)
    {
        cin >> j;
        if (j != x)
        {
            ans++;
            x = j;
        }
    }
    cout << ans;
}