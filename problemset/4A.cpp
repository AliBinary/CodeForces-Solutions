/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:08:19
*/

#include <iostream>
using namespace std;

int main()
{
    int W;
    bool Can = false;
    cin >> W;
    if (W >= 1)
        if (W <= 100)
            if (W % 2 == 0)
                if (W != 2)
                    Can = true;
    if (Can)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}