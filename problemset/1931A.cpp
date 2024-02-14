/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 13.02.2024 23:04:47
*/

#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string ans = "";
        for (int i = 2; i >= 0; i--)
        {
            int B = min(26, n - i);
            n -= B;
            ans += (char(96 + B));
        }
        reverse(ans.begin(), ans.end());
        cout << ans << "\n";
    }
}