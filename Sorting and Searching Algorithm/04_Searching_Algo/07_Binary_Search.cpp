#include <bits/stdc++.h>
using namespace std;
/*
Advantages:

!Efficiency: O(log n) time complexity.
- Simple Implementation: Conceptually straightforward.
- Works on Sorted Data: Binary search requires data to be sorted, and it performs efficiently in such cases.

Considerations:
- Index-based: Ideal for arrays, but requires adjustments for other data structures.

*/
//! IMPORTANT: Binary search requires the array to be sorted beforehand.

int binarySearch(vector<int> &arr, int key)
{
    int low = 0;
    int high = arr.size() - 1; // Corrected to use size of the array

    while (low <= high)
    {
        int mid = low + (high - low) / 2;  // using this to stop integer flow error

        //For example, if low = 2,000,000,000 and high = 2,000,000,000, then low + high = 4,000,000,000, which exceeds the maximum value for a 32-bit signed integer (2,147,483,647). This results in undefined behavior or incorrect results.

        if (arr[mid] == key) // Element found
            return mid;

        else if (arr[mid] > key) // Search in the left half
        {
            high = mid - 1;
        }
        else // Search in the right half
        {
            low = mid + 1;
        }
    }

    return -1; // Element not found
}

int main()
{
    int target;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8}; // Sorted array

    cout << "Enter the target value: ";
    cin >> target;

    int result = binarySearch(arr, target);

    if (result != -1)
        cout << "The index of " << target << " is " << result << endl;
    else
        cout << "Target not found in the array." << endl;

    return 0;
}
