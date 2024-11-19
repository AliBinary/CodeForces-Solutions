/*
    author:  AliBinary
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 20.11.2024 02:30:06
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 5;

void Main()
{
    int n;
    cin >> n;
    cout << (n % 10) + (n / 10) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (--t)
        Main();
    Main();
    return 0;
}