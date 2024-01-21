/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 18:59:09
*/

#include <iostream>
using namespace std;

int main()
{
    int alphabet[27] = {}, alphabet2[27] = {}, index;
    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    for (int i = 0; i < a.length(); i++)
    {
        index = a[i] - 65;
        alphabet[index]++;
    }
    for (int i = 0; i < b.length(); i++)
    {
        index = b[i] - 65;
        alphabet[index]++;
    }
    for (int i = 0; i < c.length(); i++)
    {
        index = c[i] - 65;
        alphabet2[index]++;
    }

    bool flag = true;
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] != alphabet2[i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}