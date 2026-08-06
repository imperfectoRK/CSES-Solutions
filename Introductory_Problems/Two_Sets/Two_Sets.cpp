/*
 * Problem Name: Two_Sets
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-06
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    int n; cin>>n;
    if((n%2==0 && (n/2)%2==0) || ((n+1)%2==0 && ((n+1)/2)%2==0))
    {
        cout<<"YES"<<'\n';
        long long target=(1LL*n*(n+1))>>2;
        vector<int> s1,s2;
        for(int i=n;i>0;i--)
        {
            if(target>=i) 
            {
                target-=i; s1.push_back(i);
            }
            else s2.push_back(i);
        }
        cout<<s1.size()<<'\n';
        for(int &it:s1) cout<<it<<" ";
        cout<<'\n';
        cout<<s2.size()<<'\n';
        for(int &it:s2) cout<<it<<" ";
 
        
    }
    
    else cout<<"NO"<<'\n';
 
    return 0;
}