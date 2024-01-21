/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:08:31
*/

#include <iostream>
using namespace std;

int main()
{
    string X;
    int n;
    cin >> n;

    string words[n];
    for (int i = 0; i < n; i++)
    {
        cin >> X;
        words[i] = X;
    }

    for (int q = 0; q < n; q++)
    {
        string x = words[q];
        if (x.length() > 10)
        {
            int len = x.length();
            x = words[q][0] + to_string(len - 2) + words[q][len - 1];
            words[q] = x;
        }
    }
    for (int i = 0; i < n; i++)
        cout << words[i] << endl;
}