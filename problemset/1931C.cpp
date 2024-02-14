/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 14.02.2024 10:50:25
*/

#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        for (auto &x : a)
        {
            cin >> x;
        }

        int f1 = 1, f2 = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
                f1++;
            else
                break;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] == a[i + 1])
                f2++;
            else
                break;
        }

        int ans = n;
        if (f1 == f2)
        {
            if (a[0] == a[n - 1] && f1 != n)
                ans -= 2 * f1;
            else
                ans -= f1;
        }
        else
        {
            if (f2 > f1)
                swap(f1, f2);
            ans -= f1;
            if (a[0] == a[n - 1])
                ans -= f2;
        }
        cout << ans << "\n";
    }
}