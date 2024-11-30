#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach Using Sorting

Time Complexity : O(nLogn)
Space Complexity : O(1)

-------------------------------------------------------*/

int KthLargestelement(vector<int> arr, int k)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size() - k];
}

/*-----------------------------------------------------
// Priority Queue by dafault make Max heap

2nd Approach Using Priority Queue

Time Complexity : O(n)
Space Complexity : O(n) as we are using stack for storing elements

-------------------------------------------------------*/

int KthLargestElement(vector<int> arr, int k)
{
    priority_queue<int> ans;
    int value;
    for (auto i : arr)
    {
        ans.push(i);
    }
    for (int i = 0; i < k; i++)
    {
        value = ans.top();
        ans.pop();
    }
    return value;
}

int main()
{
    int k;
    cout << "Enter the K" << endl;
    cin >> k;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << KthLargestElement(arr, k);

    return 0;
}