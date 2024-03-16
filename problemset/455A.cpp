#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n;
    cin >> n;
    int a[n];
    int freq[100001] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    int dp[100001] = {0};
    dp[1] = freq[1];
    for (int i = 2; i <= 1e5; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + i * freq[i]);
    }
    cout << dp[100000];
}