#include <bits/stdc++.h>
using namespace std;


/*-----------------------------------------------------

1st Approach 
Counting the number of 0s,1s and 2s and then putting all in a new array)

Time Complexity : O(n)
Space Complecity : O(n)

-------------------------------------------------------*/

void sortColors(vector<int> &nums, int n) 
{                                       
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            c0++;
        }
        if (nums[i] == 1)
        {
            c1++;
        }
        if (nums[i] == 2)
        {
            c2++;
        }
    }
    for (int i = 0; i < c0; i++)
    {
        nums[i] = 0;
    }
    for (int i = c0; i < c0 + c1; i++)
    {
        nums[i] = 1;
    }
    for (int i = c1 + c0; i < nums.size(); i++)
    {
        nums[i] = 2;
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}

/*-----------------------------------------------------

2nd Approach (Better One In_Place Space Complexity O(1))

Time Complexity : O(n)
Space Complecity : O(1)

-------------------------------------------------------*/

void SortColors(vector<int> &nums)          
{
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high)                  // here it is mid
    {
        if (nums[mid] == 0)              // we are checking with the mid element
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high]);
            high--;
        }
        else
        {
            mid++;
        }
    }
}

// 3rd Approach is to sort them

int main()
{
    vector<int> nums = {1, 2, 2, 0, 2, 2, 1, 2, 1, 0};
    int n = nums.size();

    //  sortColors(nums, n);

    SortColors(nums);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
