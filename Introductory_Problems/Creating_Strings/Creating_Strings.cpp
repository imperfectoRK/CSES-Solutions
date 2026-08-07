/*
 * Problem Name: Creating_Strings
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-07
 */

#include <bits/stdc++.h>
using namespace std;
long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s; cin>>s;
    vector<string> ans;
    sort(s.begin(), s.end());
 
    do {
        ans.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    
    cout<<ans.size()<<'\n';
    for(auto &t:ans) cout<<t<<'\n';
 
    return 0;
}