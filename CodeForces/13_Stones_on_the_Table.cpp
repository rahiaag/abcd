/*
Question Link : https://codeforces.com/problemset/problem/266/A

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    int stone=0;

    stack<char> sto;
    sto.push(s[0]);

    for (int i = 1; i < n; i++)
    {
        if (s[i] == sto.top())
        {
            stone++;
        }
        else
        {
            sto.push(s[i]);
        }
    }

    cout << stone;

    return 0;
}