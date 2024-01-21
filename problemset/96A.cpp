/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:03:04
*/

#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    bool danger = false;
    string sit;
    cin >> sit;

    for (int i = 1; i < sit.size(); i++)
    {
        if (sit[i] == sit[i - 1])
            x++;
        else
            x = 1;

        if (x >= 7)
        {
            danger = true;
            break;
        }
    }
    if (danger)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}