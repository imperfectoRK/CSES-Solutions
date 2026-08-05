/*
 * Problem Name: Permutations
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-05
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin>>n;
    if(n==1) cout<<"1"<<'\n';
    else if(n==2 || n==3) cout<<"NO SOLUTION"<<'\n';
    else
    {
        int temp=2;
        while(temp<=n) {
            cout<<temp<<" "; temp+=2;
        }
        temp=1;
        while(temp<=n)
        {
            cout<<temp<<" "; temp+=2;
        }
        cout<<'\n';
    }
 
    return 0;
}