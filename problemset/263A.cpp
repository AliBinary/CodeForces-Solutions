/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:00:04
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, x, min_moves = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> x;
            if (x == 1)
                break;
        }
        if (x == 1)
            break;
    }
    i = abs(i - 2);
    j = abs(j - 2);

    min_moves = i + j;
    cout << min_moves;

    return 0;
}