/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 13.02.2024 23:20:07
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
        lli a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        if ((a % 2 && b % 2) || (b / 2 == a && a % 2))
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}