/*
Question Link : https://codeforces.com/problemset/problem/339/A

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string result = "";

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            count1++;
        }
        else if (s[i] == '2')
        {
            count2++;
        }
        else if (s[i] == '3')
        {
            count3++;
        }
    }
    for (int i = 0; i < count1; i++)
    {
        result += '1';
        result += '+';
    }
    for (int i = 0; i < count2; i++)
    {
        result += '2';
        result += '+';
    }
    for (int i = 0; i < count3; i++)
    {
        result += '3';
        result += '+';
    }

    int x = result.size();

    if (result[x - 1] == '+')
    {
        result.pop_back();
    }

    cout << result;

    return 0;
}