/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 20:56:32
*/

#include <iostream>
using namespace std;

void solve()
{
    string s;
    int zeros = 0, ones = 0;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            zeros++;
        else
            ones++;
    }
    if (zeros == ones)
        cout << 0 << endl;
    else
    {
        int i = 0;
        while (zeros >= 0 && ones >= 0)
        {
            if (s[i++] == '0')
                ones--;
            else
                zeros--;
        }
        int ans = s.length() - i + 1;
        cout << ans << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}