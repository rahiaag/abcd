#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach Using 2 loops

Time Complexity : O(n^2)
Space Complecity : O(1)

-------------------------------------------------------*/

int countSubarray(vector<int> nums, int key)
{
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[i];

            if (sum == key)
            {
                count++;
            }
        }
    }
    return count;
}

/*-----------------------------------------------------

2nd Approach Using Unordered Map

Time Complexity : O(n)
Space Complecity : O(n)

-------------------------------------------------------*/

int CountSubarray(vector<int> nums, int key)
{
    unordered_map<int, int> mp;

    int complement;
    int sum = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        complement = sum - key;

        if (sum == key)
        {
            count++;
        }

        if (mp.find(complement) != mp.end())
        {
            count += mp[complement];
        }

        mp[sum]++;
    }
    return count;
}

int main()
{
    vector<int> nums = {10, 4, 8, 3, 4, 1};
    int key = 8;
    // cout << countSubarray(nums, key);
    cout << CountSubarray(nums, key);

    return 0;
}

