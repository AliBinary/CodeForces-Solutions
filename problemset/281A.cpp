/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:08:44
*/

#include <iostream>
using namespace std;

int main()
{
    string word;
    cin >> word;

    word[0] = toupper(word[0]);

    cout << word;
    return 0;
}