/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:07:16
*/

#include <iostream>
using namespace std;

int main()
{
    string input, Vowels = "aoyeui";
    char letter;

    cin >> input;
    int len = input.length();

    for (int i = 0; i < len; i++)
    {
        letter = tolower(input[i]);
        if (Vowels.find(letter) == std::string::npos)
            cout << '.' << letter;
    }

    return 0;
}