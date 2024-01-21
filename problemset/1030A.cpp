/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:04:14
*/

#include <iostream>
using namespace std;

int main()
{
    int n, opinions = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x)
            opinions++;
    }

    if (opinions)
        cout << "HARD";
    else
        cout << "EASY";
}