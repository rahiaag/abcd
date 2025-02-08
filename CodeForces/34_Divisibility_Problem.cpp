#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> ans(n);
    vector<int> ans2(n);

    vector<int> ans3;

    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
        cin >> ans2[i];
    }

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        count = (ans2[i] - (ans[i] % ans2[i])) % ans2[i];
        ans3.push_back(count);
    }

    for (auto i : ans3)
    {
        cout << i << endl;
    }
    return 0;
}