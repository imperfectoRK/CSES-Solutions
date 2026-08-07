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
 
    for (char c : s) {
        freq[c - 'A']++;
    }
 
    int oddCount = 0;
    int oddIndex = -1;
 
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) {
            oddCount++;
            oddIndex = i;
        }
    }
 
    // A palindrome can have at most one character
    // with an odd frequency.
    if (oddCount > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }
 
    string left;
 
    // Build the left half
    for (int i = 0; i < 26; i++) {
        left += string(freq[i] / 2, char('A' + i));
    }
 
    // Build the right half
    string right = left;
    reverse(right.begin(), right.end());
 
    // Middle character, if any
    string middle = "";
    if (oddIndex != -1) {
        middle = char('A' + oddIndex);
    }
 
    cout << left << middle << right << '\n';
 
    return 0;
}