/*
Question Link : https://codeforces.com/problemset/problem/236/A

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    set<char> s(str.begin(), str.end());

    int n = s.size();

    if (n % 2 != 0)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
    return 0;
}