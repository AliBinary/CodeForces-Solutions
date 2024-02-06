/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 07.02.2024 00:11:41
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, cnt_a = 0, cnt_b = 0;
        cin >> n >> m >> k;
        bool A[k] = {}, B[k] = {};

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= k && A[x - 1] == 0)
            {
                A[x - 1] = 1;
                cnt_a++;
            }
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            if (x <= k && B[x - 1] == 0)
            {
                B[x - 1] = 1;
                cnt_b++;
            }
        }
        bool ans = true;
        if (cnt_a < (k / 2) || cnt_b < (k / 2))
            ans = false;
        else
            for (int i = 0; i < k; i++)
            {
                if (!A[i] && !B[i])
                {
                    ans = false;
                    break;
                }
            }

        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}