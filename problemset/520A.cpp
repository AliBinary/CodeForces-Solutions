/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 04.02.2024 05:50:46
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n;
    string s;
    cin >> n >> s;

    bool ans = true;
    for (int i = 65; i <= 90; i++)
    {
        bool flag = false;
        for (int j = 0; j < s.size(); j++)
        {
            if (toupper(s[j]) == char(i))
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            ans = false;
            break;
        }
    }

    if (ans)
        cout << "YES";
    else
        cout << "NO";
}