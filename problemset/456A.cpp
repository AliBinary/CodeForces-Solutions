/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 28.01.2024 19:01:38
*/

#include <bits/stdc++.h>
using namespace std;

struct laptop
{
    int x;
    int y;
};

bool compare(laptop i1, laptop i2)
{
    return (i1.x < i2.x);
}

int main()
{
    int n;
    cin >> n;
    vector<laptop> vec(n);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vec[i].x = a;
        vec[i].y = b;
    }
    sort(vec.begin(), vec.end(), compare);

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vec[i].x << " " << vec[i].y << endl;
    }

    bool ans = true;
    for (int i = 1; i < n; i++)
    {
        if (vec[i - 1].y > vec[i].y)
        {
            ans = false;
            break;
        }
    }

    if (ans)
        cout << "Poor Alex";
    else
        cout << "Happy Alex";
}