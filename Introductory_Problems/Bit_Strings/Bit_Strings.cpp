/*
 * Problem Name: Bit_Strings
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-06
 */

#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
 
long long power(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    cout<<power(2,n)<<'\n';
 
 
    return 0;
}