/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 07.02.2024 00:11:02
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
        string s;
        cin >> n >> s;
        while (!s.empty() && s.back() == 'W')
        {
            s.pop_back();
        }
        reverse(s.begin(), s.end());

        while (!s.empty() && s.back() == 'W')
        {
            s.pop_back();
        }
        cout << s.size() << endl;
    }
}