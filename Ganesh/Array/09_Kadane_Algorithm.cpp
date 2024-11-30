// Kadane Algorithm is used to find the maximum sum contiguous subarray within a one-dimensional numeric array
//! Single element can also be subarray
// if the array is not contiguous then it is called as subsequence
// Brute Force Time Complexity :- O(n)^2
// So We use Kadane's Algorithm  :- O(n)

// Given an integer array nums, find the subarraywith the largest sum, and return its sum

/*-----------------------------------------------------

1st Approach (Brute Force)

Time Complexity : O(N^3)
Space Complecity : O(1)
Time Limit Exceeds

-------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;

int maxsubarray(vector<int> &nums, int n)
{
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k < j; k++)
            {
                sum += nums[k];
                maximum = max(sum, maximum);
            }
        }
    }
    return maximum;
}

/*-----------------------------------------------------

2nd Approach (Better Approach)

Time Complexity : O(N^2)
Space Complecity : O(1)

-------------------------------------------------------*/

int maxSubArray(vector<int> &nums, int n)
{
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            maximum = max(sum, maximum);
        }
    }
    return maximum;
}

/*-----------------------------------------------------

3rd Approach (Optimal Approach)
Kadane Algorithm

Time Complexity : O(N)
Space Complecity : O(1)

-------------------------------------------------------*/

long long maxSubarraySum(vector<int> &arr, int n)
{

    long long maxSum = INT_MIN;
    long long currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum = currSum + arr[i];
        maxSum = max(maxSum, currSum);

        if (currSum < 0)
            currSum = 0;
    }
    return maxSum;
}

/*-----------------------------------------------------

Follow Up question  (Print the Elements in Subarray)

Time Complexity : O(N)
Space Complecity : O(1)

-------------------------------------------------------*/

long long MaxSubarraySum(vector<int> &arr, int n)
{

    long long maxSum = INT_MIN;
    long long currSum = 0;
    int init = 0;
    int start = 0;
    int end = 0;

    for (int i = 0; i < n; i++)
    {

        currSum += arr[i];

        if (currSum > maxSum)
        {
            maxSum = currSum;
            start = init;
            end = i;
        }

        if (currSum < 0)
        {
            currSum = 0;
            init = i + 1;
        }
    }
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Maximum sum is " << maxSum;
}

int main()
{
    vector<int> arr = {-1, 2, 5, -1};
    int n = arr.size();
    // cout << "The answer is " << MaxSubArray(arr);
    // cout << "The answer is " << maxsubarray(arr, n);
    // cout << "The answer is " <<
    // maxSubArraySum(arr, n);
    MaxSubarraySum(arr, n);
    return 0;
}
