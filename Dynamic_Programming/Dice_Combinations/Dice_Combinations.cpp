/*
 * Problem Name: Dice_Combinations
 * Language: C++
 * Category: Dynamic_Programming
 * Date: 2026-08-07
 */

#include <bits/stdc++.h>
using namespace std;
 
const int MOD=1e9+7;
vector<int> dp;
int solver(int n, int currSum)
{
    if(currSum == n)
        return 1;
 
        
    if(dp[currSum] != -1)
        return dp[currSum];
 
    int count = 0;
 
    for(int dice = 1; dice <= 6; dice++)
    {
        if(currSum+dice >n) continue;
        count += solver(n, currSum + dice);
        count %= MOD;
    }
 
    return dp[currSum] = count;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    dp.assign(n+1,-1);
    cout<<solver(n,0)<<'\n';
 
 
    return 0;
}