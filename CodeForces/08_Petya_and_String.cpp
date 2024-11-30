/*

Question Link : https://codeforces.com/problemset/problem/112/A

Given two strings of the same length, compare them lexicographically, ignoring case.

Input:

Two strings (length between 1 and 100, containing only uppercase and lowercase letters).
Output:

Print:
-1 if the first string is lexicographically smaller.
1 if the first string is lexicographically larger.
0 if the strings are equal.
Example:

Input:
aaaa
aaaA

Output:
0

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string t;

    cin >> s;
    cin >> t;

    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (t[i] >= 'A' && t[i] <= 'Z'))
        {
            s[i] = tolower(s[i]);
            t[i] = tolower(t[i]);
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < t[i])
        {
            cout << "-1";
            return 0;
        }
        else if (s[i] > t[i])
        {
            cout << "1";
            return 0;
        }
    }

    cout << "0";
    return 0;
}