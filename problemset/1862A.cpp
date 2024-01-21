/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 18:52:34
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m, t;
    string ch = "vika";
    string a[20] = {};
    cin >> t;

    for (int k = 0; k < t; k++)
    {
        int x = 0;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char temp = a[j][i];
                if (temp == ch[x])
                {
                    x++;
                    break;
                }
            }
        }
        if (x == 4)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}