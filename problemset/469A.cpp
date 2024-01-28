/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 28.01.2024 16:01:27
*/

#include <iostream>
using namespace std;

int main()
{
    int n, k = 0;
    cin >> n;
    int p1, p2, P[2 * n] = {};
    cin >> p1;
    for (int i = 0; i < p1; i++)
    {
        int x;
        cin >> x;
        P[k++] = x;
    }
    cin >> p2;
    for (int i = 0; i < p2; i++)
    {
        int x;
        cin >> x;
        P[k++] = x;
    }

    bool ans = true;
    for (int i = 1; i <= n; i++)
    {
        bool flag = true;
        for (int j = 0; j < k; j++)
        {
            if (i == P[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            ans = false;
            break;
        }
    }

    if (ans)
        cout << "I become the guy." << '\n';
    else
        cout << "Oh, my keyboard!";
}