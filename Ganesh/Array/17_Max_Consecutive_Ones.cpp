#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

Time Complexity : O(n)
Space Complecity : O(1)

-------------------------------------------------------*/

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count = 0;
    int maximum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        maximum = max(maximum, count);
    }
    return maximum;
}
int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1, 1, 0, 1, 1};
    cout << findMaxConsecutiveOnes(nums);

    return 0;
}
