#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 5;

void Main()
{
    string s1, s2;
    cin >> s1 >> s2;

    swap(s1[0], s2[0]);
    cout << s1 << ' ' << s2 << '\n';
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