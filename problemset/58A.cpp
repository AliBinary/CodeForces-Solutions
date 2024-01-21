// 58A
#include <iostream>
using namespace std;

int main()
{
    int i = 0, x = 0;
    string s, h;
    cin >> s;
    h = "hello";

    while (s[i])
    {
        if (s[i] == h[x])
            x++;
        i++;
    }
    if (x == 5)
        cout << "YES";
    else
        cout << "NO";
}