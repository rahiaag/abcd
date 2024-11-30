#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------
        
- The Array should be Sorted
- To avoid this overflow problem, the formula mid = low + (high - low) / 2 is used.

-------------------------------------------------------*/

/*-----------------------------------------------------

Time Complexity : O(Logn) Because in each iteration the search space is halved
Space Complexity : O(1)

-------------------------------------------------------*/

int BinarySearch(vector<int> arr, int key)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 3, 5, 6, 7, 8, 9, 10};
    int key;
    cout << "Enter the Key :" << endl;
    cin >> key;

    int ans = BinarySearch(arr, key);

    if (ans != -1)
    {
        cout << "The Element is Present at index :" << ans << endl;
    }
    else
    {
        cout << "The Element is Not Present";
    }
    return 0;
}
