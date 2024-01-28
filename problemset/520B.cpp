/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 28.01.2024 21:15:19
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, m, ans;
    cin >> n >> m;
    if (n == m)
        ans = 0;
    else if (n > m)
        ans = n - m;
    else
    {
        ans = 0;
        while (n < m)
        {
            n *= 2;
            ans++;
        }
        for (int i = ans; i >= 0; i--)
        {
            int dis = n - m;
            int kam = (dis / int(pow(2, i)));
            ans += kam;
            n -= kam * pow(2, i);
        }
    }
    cout << ans;
}