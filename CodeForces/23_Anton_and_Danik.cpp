/*
Question Link : https://codeforces.com/problemset/problem/734/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[n];
    int countA = 0;
    int countD = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            countA++;
        }
        else
        {
            countD++;
        }
    }

    if (countA > countD)
    {
        cout << "Anton";
    }
    else if (countA < countD)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }

    return 0;
}