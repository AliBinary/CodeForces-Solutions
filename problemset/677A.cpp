/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:08:08
*/

#include <iostream>
using namespace std;

int main()
{
    int n, h, num = 0;
    cin >> n;
    cin >> h;

    int now;
    for (int i = 0; i < n; i++)
    {
        cin >> now;
        if (now % h == 0)
            num += now / h;
        else
            num += now / h + 1;
    }
    cout << num;
}