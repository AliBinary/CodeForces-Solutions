/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 28.01.2024 17:06:59
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int l1 = a * b * c,
        l2 = a + b + c,
        l3 = (a + b) * c,
        l4 = a * (b + c);

    l3 = max(l4, l3);
    l2 = max(l2, l3);
    l1 = max(l1, l2);
    cout << l1;
}