/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.02.2024 17:40:18
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

bool isprime(int n)
{
    // corner case
    if (n <= 1)
        return false;

    // check from 2 to n/2
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    ll x;
    while (n--)
    {
        cin >> x;
        if ((ll)sqrt(x) != sqrt(x))
        {
            cout << "NO\n";
            continue;
        }
        x = sqrt(x);

        if (isprime(x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}