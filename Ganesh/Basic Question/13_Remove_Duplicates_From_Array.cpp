#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach Using Set

Time Complexity : O(nLogn)
Space Complexity : O(n)

-------------------------------------------------------*/

vector<int> RemoveDuplicate(vector<int> &arr)
{
    vector<int> result;
    unordered_set<int> ans(arr.begin(), arr.end());
    for (auto i : ans)
    {
        result.push_back(i);
    }
    return result;
}
/*-----------------------------------------------------
This approach is only for Sorted Array

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/
vector<int> removeDuplicate(vector<int> arr)
{
    int i = 0;
    int j = 1;
    int n = arr.size();
    vector<int> ans;

    while (j < n)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
            ans.push_back(arr[i]);
        }
        j++;
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 1};
    vector<int> result = removeDuplicate(arr);
    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}