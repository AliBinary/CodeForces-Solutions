/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 16:08:54
*/

#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long a[n + 1], s[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    s[n] = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        s[i] = a[i] + s[i + 1];
    }
    long long ans = s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] > 0)
            ans += s[i];
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}