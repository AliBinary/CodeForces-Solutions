/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 10.02.2024 00:27:10
*/

#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>

int main()
{
    ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // vi a(n);
        int a[n];
        for (auto &x : a)
            cin >> x;
        // vi pvr(n, -1);
        int pvr[n];
        pvr[0] = -1;
        for (int i = 1; i < n; i++)
        {
            const int cur = a[i];
            if (cur == a[i - 1])
                pvr[i] = pvr[i - 1];
            else
                pvr[i] = i - 1;
        }

        int q;
        cin >> q;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            r--;
            l--;
            if (pvr[r] >= l)
                cout << pvr[r] + 1 << " " << r + 1 << endl;
            else
                cout << "-1 -1" << endl;
        }
        cout << endl;
    }
}