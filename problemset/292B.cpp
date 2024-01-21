/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:10:37
*/

#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int n, l;
    float radius, min = 0;
    int lanterns[1000] = {};
    cin >> n;
    cin >> l;
    cout << fixed << setprecision(10);
    for (int i = 0; i < n; i++)
    {
        cin >> lanterns[i];
    }

    sort(lanterns, lanterns + n);

    for (int i = 1; i < n; i++)
    {
        radius = (lanterns[i] - lanterns[i - 1]) / 2.;
        if (radius > min)
            min = radius;
    }
    if (lanterns[0] > min)
        min = lanterns[0];

    if (l - lanterns[n - 1] > min)
        min = l - lanterns[n - 1];

    cout << min;
}