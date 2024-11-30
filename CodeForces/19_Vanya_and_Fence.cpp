/*
Question Link : https://codeforces.com/problemset/problem/677/A

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int friendNumber, fenceHeight;

    cin >> friendNumber >> fenceHeight;
    vector<int> height(friendNumber);

    int width = 0;

    for (int i = 0; i < friendNumber; i++)
    {
        cin >> height[i];
    }

    for (int i = 0; i < friendNumber; i++)
    {
        if (height[i] <= fenceHeight)
        {
            width++;
        }
        else
        {
            width = width + 2;
        }
    }

    cout << width;

    return 0;
}