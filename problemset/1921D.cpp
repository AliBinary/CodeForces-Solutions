/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 25.01.2024 16:57:56
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        sort(a, a + n);
        sort(b, b + m, greater<int>());

        long long ans = 0;
        for (int i = 0; i < n; i++)
            ans += max(abs(a[i] - b[i]), abs(a[i] - b[m - (n - i)]));
        cout << ans << '\n';
    }
}