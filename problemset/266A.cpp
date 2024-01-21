/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:07:07
*/

#include <iostream>
using namespace std;

int main()
{
    int n, answer = 0;
    string s;

    cin >> n;
    cin >> s;

    for (int i = 1; i <= n; i++)
        if (s[i] == s[i - 1])
            answer++;

    cout << answer;

    return 0;
}