#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach

Time Complexity : O(nLogn)
Space Complexity : O(1)

-------------------------------------------------------*/

vector<int> MaxandMin(vector<int> arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int mini = arr[0];
    int maxi = arr[n - 1];
    return {mini, maxi};
}

/*-----------------------------------------------------

2nd Approach

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/

vector<int> MinandMax(vector<int> arr)
{
    int mini = *min_element(arr.begin(), arr.end());
    int maxi = *max_element(arr.begin(), arr.end());

    return {mini, maxi};
}
int main()
{
    vector<int> arr = {1, 5, 3, 2, 4, 5, 7, 8};
    vector<int> ans = MaxandMin(arr);
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}