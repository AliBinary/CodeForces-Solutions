/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 07.02.2024 00:11:14
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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int f, l;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
                l = i;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
                f = i;
        }
        cout << abs(f - l) + 1 << endl;
    }
}