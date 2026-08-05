/*
 * Problem Name: Weird_Algorithm
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-05
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long n; cin>> n;
    
    while(n!=1)
    {
        cout<<n<<" ";
        if(n%2==0) n/=2;
        else n=(n*3+1);
    }
    cout<<"1";
 
    return 0;
}