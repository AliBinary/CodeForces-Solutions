/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:04:03
*/

#include <iostream>
using namespace std;

int main()
{
    string p;
    cin >> p;

    bool ans = false;

    for (int i = 0; i < p.length(); i++)
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {
            ans = true;
            break;
        }
    }

    if (ans)
        cout << "YES";
    else
        cout << "NO";
}