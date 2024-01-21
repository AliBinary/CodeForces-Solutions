/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:03:21
*/

#include <iostream>
using namespace std;

int main()
{
    int n, p, q, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        cin >> q;
        if (q - p >= 2)
        {
            ans++;
        }
    }
    cout << ans;
}