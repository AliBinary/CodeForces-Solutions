#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int M = 1e5 + 5;

void Main()
{
    int x, y;
    cin >> x >> y;
    cout << min(x, y) << ' ' << max(x, y) << endl;
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