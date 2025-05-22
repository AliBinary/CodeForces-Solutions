#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int M = 1e5 + 5;

void Main()
{
    int n;
    cin >> n;

    pair<int, int> ans;
    for (int i = 2; i <= n; i++)
    {
        int temp = 0;
        for (int j = 1; i * j <= n; j++)
        {
            temp += i * j;
        }
        if (temp > ans.first)
            ans = {temp, i};
    }
    cout << ans.second << endl;
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