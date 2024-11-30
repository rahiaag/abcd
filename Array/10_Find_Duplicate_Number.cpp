#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive. There is only one repeated number in nums, return this repeated number.

/*-----------------------------------------------------

1st Approach Sorting the Number and then checking for each number if duplicate is present

Time Complexity : O(nlogn)
Space Complecity : O(1)

-------------------------------------------------------*/

int Findduplicate(vector<int> nums)
{

    int n = nums.size();
    int ans = 0;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            ans = nums[i];
        }
    }
    return ans;
}

/*-----------------------------------------------------

1st Approach Using Unordered_Map

Time Complexity : O(N)  Range Based loop
Space Complecity : O(N) for Storing the element in Map

-------------------------------------------------------*/

int FindDuplicate(vector<int> &nums)
{

    unordered_map<int, int> mp;
    int ans;

    for (auto i : nums)
    {
        mp[i]++;
    }

    for (auto i : mp)
    {
        if (i.second >= 2)
        {
            ans = i.first;
        }
    }
    return ans;
}

/*-----------------------------------------------------

1st Approach Using Floyd Hare and tortoise
(if duplicate is present in the vector then cycle will form and the entry point of the cycle will be consider as duplicate)

Time Complexity : O(N)
Space Complecity : O(1)

-------------------------------------------------------*/

// keep care  n + 1 integers where each integer is in the range [1, n] inclusive

int findDuplicate(vector<int> &nums)
{
    int slow = nums[0];
    int fast = nums[0];

    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    fast = nums[0];

    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}
/*
/// Follow up Question when no duplicate is present
unordered_map<int,int>visited;
/// Check for infinite loop
        if (visited.find(slow) != visited.end() || visited.find(fast) != visited.end()) {
            return -1; // Indicate that no duplicate exists
        }

        /// Mark nodes as visited
        visited.insert(slow);
        visited.insert(fast);
*/

int main()
{
    // keep care  n + 1 integers where each integer is in the range [1, n] inclusive

    vector<int> arr = {2, 5, 1, 1, 6, 3, 4};

    cout << "The Duplicate Element is " << Findduplicate(arr) << endl;
    cout << "The Duplicate Element is " << FindDuplicate(arr) << endl;
    cout << "The Duplicate Element is " << findDuplicate(arr) << endl;

    return 0;
}
