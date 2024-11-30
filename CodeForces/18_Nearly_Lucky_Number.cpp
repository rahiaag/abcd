/*
Question Link : https://codeforces.com/problemset/problem/110/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int count = 0;

    string res = to_string(n);

    for (int i = 0; i < res.size(); i++)
    {
        if (res[i] == '4' || res[i] == '7')
        {
            count++;
        }
    }

    if (count == 4 || count == 7)
        cout << "YES";
    else
    {
        cout << "NO";
    }

    return 0;
}