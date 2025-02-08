#include <bits/stdc++.h>
using namespace std;

/*

- Time Complexity: O(n), where n is the number of elements in the array.
- Suitability: Linear search is simple and straightforward
- Usage: Useful when the array is small

*/

int linearSearch(vector<int> arr, int key)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i; // Return the index if the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int target;

    cout << "Enter the target element: ";
    cin >> target;

    int result = linearSearch(arr, target);

    if (result != -1)
    {
        cout << "Element " << target << " found at index " << result << endl;
    }
    else
    {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}