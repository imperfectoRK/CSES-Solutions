/*
 * Problem Name: Tower_of_Hanoi
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-07
 */

#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> moves;
int toh(int n, int l,int r,int m)
{
    if(n==1) { moves.push_back({l,r}); return 1;}
 
    int mv=toh(n-1,l,m,r);
    moves.push_back({l,r});
    mv+=toh(n-1,m,r,l);
    return mv+1;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin>>n;
    cout<<toh(n,1,3,2)<<'\n';
    for(auto &it:moves) cout<<it.first<<" "<<it.second<<'\n';
    return 0;
}