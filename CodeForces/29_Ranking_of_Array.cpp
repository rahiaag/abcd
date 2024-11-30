#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach
vector<int> functionn(vector<int> array, int n)
{
    vector<int> result;
    vector<int> ans(array.begin(), array.end());
    sort(ans.begin(), ans.end());

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i] == ans[j])
            {
                result.push_back(j + 1);
            }
        }
    }
    return result;
}

// Optimized Approach

vector<int> Ranking(vector<int> ans, int n)
{
    unordered_map<int, int> mp;
    vector<int> value(n);
    vector<int> result(ans.begin(), ans.end());
    sort(ans.begin(), ans.end());

    for (int i = 1; i <= n; i++)
    {
        mp[i] = i;
        mp[ans[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        value[i] = mp[ans[i]];
    }
    return value;
}
int main()
{
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    vector<int> ans = Ranking(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}

/* Given an Array of N integer,replace each element of the array by its rank in the array

Input : 20 15 26 2 98 6
Output : 4 3 5 1 6 2
*/