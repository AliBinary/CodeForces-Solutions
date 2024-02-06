/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 06.02.2024 12:49:23
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

int main()
{
    // ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    string txt, str = "WUB";
    cin >> txt;
    vi indexes;
    int found = txt.find(str);
    while (found != string::npos)
    {
        indexes.push_back(found);
        found = txt.find(str, found + str.size());
    }
    if (found == -1)
        indexes.push_back(-1);

    int x = 0;
    for (int i = 0; i < txt.size(); i++)
    {
        if (i == indexes.at(x))
        {
            x = ++x % indexes.size();
            i += 2;
            cout << " ";
        }
        else
        {
            cout << txt[i];
        }
    }
}