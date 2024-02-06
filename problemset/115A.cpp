/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.02.2024 15:53:11
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n;
    cin >> n;
    int p[n + 1];
    int ans = 0;
    vi prev, now;
    vi::iterator it;
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
        if (p[i] == -1)
            now.push_back(i);
    }
    while (now.size())
    {
        ans++;
        prev = now;
        now.clear();
        for (int i = 1; i <= n; i++)
        {
            it = find(prev.begin(), prev.end(), p[i]);
            if (it != prev.end())
                now.push_back(i);
        }
    }
    cout << ans;
}