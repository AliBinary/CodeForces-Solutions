/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 07.02.2024 00:11:41
*/

#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using ld = long double;
using pii = pair<lli, lli>;
using vii = vector<pii>;
using vi = vector<lli>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<bool> A(k);
        vector<bool> B(k);

        for (int i = 0; i < n; i++)
        {
            lli x;
            cin >> x;
            if (x > k)
            {
                continue;
            }
            x--;
            A[x] = true;
        }
        for (int i = 0; i < m; i++)
        {
            lli x;
            cin >> x;
            if (x > k)
            {
                continue;
            }
            x--;
            B[x] = true;
        }

        bool possible = true;
        lli cA = 0, cB = 0;
        for (int i = 0; i < k; i++)
        {
            if (A[i] || B[i])
            {
                continue;
            }
            possible = false;
            break;
        }
        for (int i = 0; i < k; i++)
        {
            if (A[i] && B[i] == false)
            {
                cA++;
            }
            if (A[i] == false && B[i])
            {
                cB++;
            }
        }
        if (cA > k / 2)
            possible = false;
        if (cB > k / 2)
            possible = false;
        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}