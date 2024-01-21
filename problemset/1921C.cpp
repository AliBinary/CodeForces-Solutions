/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 17:23:06
*/

#include <iostream>
#define ll long long
using namespace std;

void solve()
{
    ll n, f, a, b, ans = 0;
    cin >> n >> f >> a >> b;
    ll m[n + 1], d[n];

    m[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> m[i];
    }
    for (int i = 0; i < n; i++)
    {
        d[i] = abs(m[i] - m[i + 1]);
    }
    for (int i = 0; i < n; i++)
    {
        ans += min(d[i] * a, b);
    }
    if (ans >= f)
        cout << "no" << endl;
    else
        cout << "yes" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}