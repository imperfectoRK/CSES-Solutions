/*
 * Problem Name: Gray_Code
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-07
 */

#include <bits/stdc++.h>
using namespace std;
 
vector<string> solver(int n)
{
    if(n==1)
    {
        vector<string> base={"0","1"};
        return base;
    }
    vector<string> start=solver(n-1);
    vector<string> mirror=start; reverse(mirror.begin(),mirror.end());
    for(string &s: start)
        s="0"+s;
    for(string &s:mirror) s="1"+s;
    start.insert(start.end(),mirror.begin(),mirror.end());
    return start;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin>>n;
    vector<string> ans=solver(n);
    for(string &s:ans) cout<<s<<'\n';
 
    return 0;
}