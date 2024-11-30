/*
Question Link : https://codeforces.com/problemset/problem/467/A
*/

#include <bits/stdc++.h>
using namespace std;

int Functionn(int n, vector<int> room, vector<int> capacity)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if ((room[i] + 2) <= capacity[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    vector<int> room(n);
    vector<int> capacity(n);

    for (int i = 0; i < n; i++)
    {
        cin >> room[i];
        cin >> capacity[i];
    }

    cout << Functionn(n, room, capacity);
}