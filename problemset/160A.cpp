/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:07:55
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, coin, sum = 0;
    cin >> n;
    int coins[101] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> coin;
        sum += coin;
        coins[i] = coin;
    }
    sort(coins, coins + n, greater<int>());
    int sum1 = 0;

    for (int i = 0; i < n; i++)
    {
        sum1 += coins[i];
        if (sum1 > sum / 2)
        {
            cout << i + 1;
            break;
        }
    }
}