/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:10:48
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<string> names(n);
    vector<int> cnt(n);

    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }

    for (int x = 0; x < n; x++)
    {
        for (int i = x - 1; i >= 0; i--)
        {
            if (names[x] == names[i])
            {
                cnt[x] = cnt[i] + 1;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (cnt[i] == 0)
            cout << "OK\n";
        else
            cout << names[i] << cnt[i] << '\n';
    }
}