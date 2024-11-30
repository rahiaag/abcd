#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach Using Loop (Brute Force)

Time Complexity : O(n^2)
Space Complecity : O(1)

-------------------------------------------------------*/

vector<int> TwoSum(vector<int> &nums, int target)
{
    vector<int> ans;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;

/*-----------------------------------------------------

2nd Approach Using HashMap (Optimal Approach)

Time Complexity : O(n)
Space Complecity : O(n)

-------------------------------------------------------*/

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];

        if (mp.find(complement) != mp.end())
        {
            ans.push_back(i);
            ans.push_back(mp[complement]);
        }
        mp[nums[i]] = i;
    }
    return ans;
}

}
int main()
{
    vector<int> arr = {2, 4, 1, 9};
    int target = 6;
    vector<int> ans = TwoSum(arr, target);

    for (auto i : ans)
        cout << i << " ";

    return 0;
}
