/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 04.02.2024 22:03:56
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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int Max_index = 0, Max = a[0], Min_index = n - 1, Min = a[n - 1];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > Max)
        {
            Max = a[i];
            Max_index = i;
        }
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] < Min)
        {
            Min = a[i];
            Min_index = i;
        }
    }
    int ans = abs(Max_index - 0) + abs(Min_index - (n - 1));
    if (Max_index > Min_index)
        ans--;
    cout << ans;
}