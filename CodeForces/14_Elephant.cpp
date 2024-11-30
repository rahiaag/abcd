/*
Question Link : https://codeforces.com/problemset/problem/617/A

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int count = 0;
    while (x > 0)
    {
        if (x >= 5)
        {
            x = x - 5;
        }
        else
        {
            x = 0;
        }
        count++;
    }
    cout << count;
    return 0;
}