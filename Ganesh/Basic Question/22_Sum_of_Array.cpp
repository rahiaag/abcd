#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach Using Recursion

Time Complexity : O(n)
Space Complexity : O(n)

-------------------------------------------------------*/

int SumofArray(vector<int> arr, int n)
{
    if (n == 0)
    {
        return arr[0];
    }
    return arr[n] + SumofArray(arr, n - 1);
}

/*-----------------------------------------------------

2nd Approach

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/

int SumOfArray(vector<int> arr, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum; 
}

int main()
{
    vector<int> arr = {4, 2, 3, 4};
    int n = arr.size() - 1;

    cout << SumofArray(arr, n);

    return 0;
}