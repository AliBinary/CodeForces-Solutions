/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:07:39
*/

#include <iostream>
int main()
{
    unsigned long long int m, n, a;
    std::cin >> m;
    std::cin >> n;
    std::cin >> a;

    if (m % a == 0)
        m /= a;
    else
    {
        m /= a;
        m++;
    }

    if (n % a == 0)
        n /= a;
    else
    {
        n /= a;
        n++;
    }

    long long ans = (long long int)m * n;
    std::cout << ans;
    return 0;
}