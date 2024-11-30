/*
Question Link : https://codeforces.com/problemset/problem/271/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    cin >> d;

    while (true)
    {
        d++;
        int n=d;
        int a = n % 10;
        n = n / 10;
        int b = n % 10;
        n = n / 10;
        int c = n % 10;
        int e = n / 10;

        if (a != b && a != c && a != e && b != c && b != e && c != e)
        {
            cout << d;
            break;
        }
    }
    return 0;
}
