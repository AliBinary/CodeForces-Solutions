/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:09:12
*/

#include <iostream>
using namespace std;

int main()
{
    int n, x, y, z, now;
    x = y = z = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> now;
        x += now;

        cin >> now;
        y += now;

        cin >> now;
        z += now;
    }
    if (x == 0 && y == 0 && z == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}