/*
 * Problem Name: Distinct_Numbers
 * Language: C++
 * Category: Sorting_and_Searching
 * Date: 2026-08-05
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin>>n;
    int temp;
    unordered_set<int> st;
    for(int i=0;i<n;i++)
        {
            cin>>temp;    
            st.insert(temp);
        }
    cout<<st.size()<<'\n';
    return 0;
}