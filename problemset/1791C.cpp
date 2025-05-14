#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string a;
    cin >> n >> a;

    while (a.length() > 1)
    {
        if ((a.front() == '0' && a.back() == '1') || (a.front() == '1' && a.back() == '0'))
            a = a.substr(1, a.length() - 2);
        else
            break;
    }
    cout << a.length() << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}