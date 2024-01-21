/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 18:59:23
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    char letters[26] = {};
    int flag, X = 0, ans = 0;
    string ch;

    cin >> ch;
    ch.erase(remove(ch.begin(), ch.end(), '{'), ch.end());
    while (true)
    {
        if (ch[0] == '}')
            break;

        flag = false;
        for (int i = 0; i < X; i++)
        {
            if (ch[0] == letters[i])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            letters[X++] = ch[0];
            ans++;
        }

        if (ch[1] == '}')
            break;
        cin >> ch;
    }
    cout << ans;
}