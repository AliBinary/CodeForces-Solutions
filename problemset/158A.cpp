/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:05:00
*/

#include <iostream>
using namespace std;

int main()
{
    int n, k, sum;
    n = k = sum = 0;
    cin >> n;
    cin >> k;

    int scores[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    k = scores[k - 1];

    for (int i = 0; i < n; i++)
    {
        if (scores[i] >= k & scores[i] > 0)
            sum += 1;
    }

    cout << sum;
    return 0;
}