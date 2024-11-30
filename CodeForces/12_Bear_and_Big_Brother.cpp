/*
Question Link : https://codeforces.com/problemset/problem/791/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lim, bob;
    cin >> lim >> bob;

    int year = 0;

    while (lim <= bob)
    {
        lim = 3 * lim;
        bob = 2 * bob;
        year++;
    }

    cout << year;
    return 0;
}