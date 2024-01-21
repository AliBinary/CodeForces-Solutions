/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 21.01.2024 19:10:23
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt1, cnt2, cnt3, cnt4, taxi;
    cnt1 = cnt2 = cnt3 = cnt4 = taxi = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int group;
        cin >> group;
        switch (group)
        {
        case 1:
            cnt1++;
            break;

        case 2:
            cnt2++;
            break;

        case 3:
            cnt3++;
            break;

        case 4:
            cnt4++;
            break;
        }
    }
    taxi += cnt4;
    cnt4 = 0;

    int cnt1_cnt3_InOneTaxi = min(cnt1, cnt3);
    taxi += cnt1_cnt3_InOneTaxi;
    cnt1 -= cnt1_cnt3_InOneTaxi;
    cnt3 -= cnt1_cnt3_InOneTaxi;

    int twin_cnt2_InOneTaxi = cnt2 / 2;
    taxi += twin_cnt2_InOneTaxi;
    cnt2 -= 2 * twin_cnt2_InOneTaxi;

    int four_cnt1_InOneTaxi = cnt1 / 4;
    taxi += four_cnt1_InOneTaxi;
    cnt1 -= 4 * four_cnt1_InOneTaxi;

    if (cnt1 == 0)
    {
        taxi += cnt2 + cnt3;
        cnt2 = cnt3 = 0;
    }
    else if (cnt2 == 1 && cnt1 == 3)
    {
        taxi += 2;
        cnt1 = cnt2 = 0;
    }
    else
    {
        taxi++;
        cnt1 = 0;
    }
    cout << taxi;
}