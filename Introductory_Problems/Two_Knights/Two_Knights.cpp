/*
 * Problem Name: Two_Knights
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-06
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin>>t;
    long long i=1;
    while(i<=t)
    {
        long long sq=i*i;
        long long total = (1LL*sq * (sq - 1)) >>1 ;
        long long atck = 4LL * (i - 1) * (i - 2); 
        cout<<total-atck<<'\n';
        i++;
    }
 
    return 0;
}