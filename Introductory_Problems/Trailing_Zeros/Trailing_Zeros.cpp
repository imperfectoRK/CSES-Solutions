/*
 * Problem Name: Trailing_Zeros
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-06
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long n;
    cin >> n;
 
    long long zeros = 0;
    long long temp = 5;
 
    while (temp <= n) {
        zeros += n / temp;
        temp *= 5;
    }
    cout<<zeros<<'\n';
 
 
    return 0;
}