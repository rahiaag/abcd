#include <bits/stdc++.h>
using namespace std;

// 1st method is to sort them this will take Time Complexity O(nlogn)

/*-----------------------------------------------------

2nd Approach  using 3 pointers checking if number is less than 0 then moving left side and greater than 0 to right side and if element is equal to zero then keeping it between less than and greater than 0

Time Complexity : O(n)
Space Complecity : O(1)

-------------------------------------------------------*/


void NegativeSide(vector<int> &nums, int n)
{
    int i = 0;
    int mid = 0;
    int high = n - 1;

    while (mid < high)
    {
        if (nums[mid] < 0)
        {
            swap(nums[mid], nums[i]);
            mid++;
            i++;
        }
        else if (nums[mid] > 0)
        {
            swap(nums[mid], nums[high]);
            high--;
        }
        else
            mid++;
    }
}

int main()
{
    vector<int> nums = {-2, -4, -6, -1, 3, 2, 0,4, 8, -1, -5};
    int n = nums.size();

    NegativeSide(nums, n);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}



