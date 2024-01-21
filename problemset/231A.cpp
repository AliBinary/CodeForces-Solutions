/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:07:25
*/

#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0, num, x;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        num = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> x;
            if (x == 1)
                num++;
        }
        if (num >= 2)
            ans++;
    }
    cout << ans;

    return 0;
}