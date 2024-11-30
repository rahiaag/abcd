#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/

void ReverseArray(vector<int> &arr)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low < high)
    {
        swap(arr[low++], arr[high--]);
    }
}

/*-----------------------------------------------------

2nd Approach

Time Complexity : O(n)
Space Complexity : O(n) Due to recursion stack

-------------------------------------------------------*/

void rev(vector<int> &arr, int i, int j)
{
    if (i >= j)
        return;
    swap(arr[i], arr[j]);
    rev(arr, ++i, --j);
}
void reverseArray(vector<int> &arr)
{
    int n = arr.size() - 1;

    rev(arr, 0, n);
}
int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13};

    ReverseArray(arr);

    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}