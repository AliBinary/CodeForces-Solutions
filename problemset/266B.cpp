/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:09:44
*/

#include <iostream>
using namespace std;

int main()
{
    int n, t;
    string s;
    cin >> n;
    cin >> t;
    cin >> s;

    for (t; t > 0; t--)
    {
        for (int i = 0; i < s.size() - 1; i++)
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
    }
    cout << s;
}