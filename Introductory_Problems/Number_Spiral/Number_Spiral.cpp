/*
 * Problem Name: Number_Spiral
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-06
 */

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        long long y, x;
        cin >> y >> x;
 
        long long k = max(y, x);
 
        if (k % 2 == 0)
        {
            if (y == k)
                cout << k * k - x + 1 << '\n';
            else
                cout << (k - 1) * (k - 1) + y << '\n';
        }
        else
        {
            if (x == k)
                cout << k * k - y + 1 << '\n';
            else
                cout << (k - 1) * (k - 1) + x << '\n';
        }
    }
}