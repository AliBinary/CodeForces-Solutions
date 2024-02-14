/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 13.02.2024 23:04:27
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
        vector<lli> a(n);
        lli sum = 0;
        for (auto &x : a)
        {
            cin >> x;
            sum += x;
        }

        bool possible = true;
        lli csum = 0;
        if (sum / n == int(sum / n))
            for (int i = 0; i < n - 1; i++)
            {
                csum += a[i];
                sum -= a[i];
                if (csum / (i + 1) < sum / (n - (i + 1)))
                {
                    possible = false;
                    break;
                }
            }
        else
            possible = false;

        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}