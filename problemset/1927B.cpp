/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 07.02.2024 00:11:24
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

        char alp[26] = {'a',
                        'b',
                        'c',
                        'd',
                        'e',
                        'f',
                        'g',
                        'h',
                        'i',
                        'j',
                        'k',
                        'l',
                        'm',
                        'n',
                        'o',
                        'p',
                        'q',
                        'r',
                        's',
                        't',
                        'u',
                        'v',
                        'w',
                        'x',
                        'y',
                        'z'};
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int cnt[26] = {};

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (a[i] == cnt[j])
                {
                    cout << alp[j];
                    cnt[j]++;
                    break;
                }
            }
        }
        cout << endl;
    }
}