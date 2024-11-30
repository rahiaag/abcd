/*
### Advantages:

- Efficiency: O(log n) time complexity.
- Simple Implementation: Conceptually straightforward.
- Works on Sorted Data: Requires data to be sorted, but performs efficiently in such cases.

### Considerations:

- Pre-sorting: Requires the array to be sorted beforehand.
- Index-based: Ideal for arrays but requires adjustments for other data structures.

*/

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;

        else if (arr[mid] > key)    
        {
            high--;
        }
        else
        {
            low++;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof arr / sizeof arr[0];
    int target = 5;

    cout << "The index is " << binarySearch(arr, n, target);
    return 0;
}