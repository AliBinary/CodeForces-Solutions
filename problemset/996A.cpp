/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 04.02.2024 22:34:45
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, bills[] = {100, 20, 10, 5, 1};
    int ans = 0, i = 0;
    cin >> n;
    while (n)
    {
        ans += n / bills[i];
        n -= n / bills[i] * bills[i];
        i++;
    }
    cout << ans;
}