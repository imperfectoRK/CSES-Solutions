/*
 * Problem Name: Palindrome_Reorder
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-07
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin >> s;
 
    vector<int> freq(26, 0);
 
    for(char &c : s)
        freq[c - 'A']++;
 
    int count = 0, index = -1;
 
    for(int i = 0; i < 26; i++) {
        if(freq[i] % 2 == 1) {
            index = i;
            count++;
        }
    }
 
    if(count > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }
 
    string pal;
 
    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0 && i != index) {
            string temp = string(freq[i] / 2, i + 'A');
            pal += temp;
        }
    }
 
    string rev = pal;
    reverse(rev.begin(), rev.end());
 
    if(index != -1)
        pal += char(index + 'A') + rev;
    else
        pal += rev;
 
    cout << pal << '\n';
 
    return 0;
}