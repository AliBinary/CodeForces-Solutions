#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int M = 1e5 + 5;

void Main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ')')
            temp++;
        else
            temp--;
        if (temp > 0)
            ans = max(ans, temp);
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