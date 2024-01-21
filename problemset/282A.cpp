/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:00:28
*/

#include <iostream>
using namespace std;

int main()
{
    int n, X = 0;
    string statement;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> statement;
        if (statement == "X++" || statement == "++X")
            X += 1;
        else if (statement == "X--" || statement == "--X")
            X -= 1;
    }
    cout << X;

    return 0;
}