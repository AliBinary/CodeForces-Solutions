/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:05:11
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input_1, input_2;
    cin >> input_1;
    cin >> input_2;

    std::for_each(input_1.begin(), input_1.end(), [](char &c)
                  { c = ::toupper(c); });
    std::for_each(input_2.begin(), input_2.end(), [](char &c)
                  { c = ::toupper(c); });

    if (input_1 > input_2)
        cout << 1;
    else if (input_1 == input_2)
        cout << 0;
    else
        cout << -1;

    return 0;
}