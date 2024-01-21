/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:00:39
*/

#include <iostream>
using namespace std;

int main()
{
    char distinct[27];
    int x, y, cnt, num;
    x = y = cnt = num = 0;
    string user;
    cin >> user;

    while (user[x])
    {
        cnt = 0;
        for (int i = 0; i < y; i++)
            if (user[x] == distinct[i])
                cnt++;
        if (cnt == 0)
        {
            distinct[y] = user[x];
            y++;
            num++;
        }
        x++;
    }

    if (num % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}