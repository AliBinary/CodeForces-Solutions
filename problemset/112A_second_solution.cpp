/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:06:34
*/

#include <iostream>
using namespace std;

int main()
{
    string input_1, input_2;
    cin >> input_1;
    cin >> input_2;

    for (int i = 0; i < input_1.length(); i++)
        input_1[i] = tolower(input_1[i]);

    for (int i = 0; i < input_2.length(); i++)
        input_2[i] = tolower(input_2[i]);

    if (input_1 > input_2)
        cout << 1;
    else if (input_1 == input_2)
        cout << 0;
    else
        cout << -1;

    return 0;
}