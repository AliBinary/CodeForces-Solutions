/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:00:15
*/

#include <iostream>
using namespace std;

int main()
{
    int ans;
    string y;
    cin >> y;
    ans = stoi(y) + 1;
    y = to_string(ans);

    while (true)
    {
        int rep = 0;
        for (int i = 0; i < y.size(); i++)
            for (int j = 0; j < y.length(); j++)
                if (y[i] == y[j] && i != j)
                {
                    rep++;
                    break;
                }
        if (rep > 0)
        {
            ans++;
            y = to_string(ans);
        }
        else
            break;
    }
    cout << y;
}