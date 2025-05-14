#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
    {
        cin >> x;
    }
    map<int, long long> freq;
    for (int i = 0; i < n; i++)
    {
        int key = a[i] - i;
        freq[key]++;
    }
    long long ans = 0;
    for (auto &pair : freq)
    {
        ans += pair.second * (pair.second - 1) / 2;
    }
    cout << ans << endl;
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