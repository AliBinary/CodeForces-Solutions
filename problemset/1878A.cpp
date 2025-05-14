#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int M = 1e5 + 5;

void Main()
{
    int n, k;
    cin >> n >> k;

    string ans = "NO";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == k)
            ans = "YES";
    }
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