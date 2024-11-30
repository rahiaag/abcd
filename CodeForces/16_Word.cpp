/*
Question Link : https://codeforces.com/problemset/problem/59/A

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();

    int lowercase = 0;
    int uppercase = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            uppercase++;
        }
    }
    string result = "";
    lowercase = n - uppercase;

    if (lowercase >= uppercase)
    {
        for (int i = 0; i < s.size(); i++)
        {
            result += tolower(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            result += toupper(s[i]);
        }
    }

    cout << result;

    return 0;
}