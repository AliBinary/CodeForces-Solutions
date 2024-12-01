/*
    author:  AliBinary
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 01.12.2024 23:02:01
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 5;

void Main()
{
    string s1;
    cin >> s1;
    int ans = int(s1[0]) - 48 + int(s1[2]) - 48;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        Main();
    return 0;
}