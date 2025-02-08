#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 4;
    set<int> mp;
    for (int i = 0; i < 4; i++)
    {
        int color;
        cin >> color;
        mp.insert(color);
    }

    int ans = count - mp.size();
    cout << ans;

    return 0;
}