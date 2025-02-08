#include <bits/stdc++.h>
using namespace std;

/*
Merge Sort: Divide and Conquer

1. Divide: The array is recursively split into halves until each subarray has one element.
2. Conquer: The merge function merges two sorted halves in O(n) time.
3. Recursion Depth: The mergeSort function recurses O(log n) times to divide the array.

Recursion Stack: Tracks the division process and helps merge subarrays back in sorted order.

Complexity:
- Time: O(n log n) (due to recursive division and merging)
- Worst-case time complexity: O(n log n)
- Space: O(n) (temporary array for merging)

- Stability: Preserves the relative order of equal elements.

Advantages:
- Efficient for large datasets.
- Useful for tasks like median finding and inversion counting.

*/


void merge(vector<int> &arr, int low, int mid, int high)
{
    int leftIndex = low;
    int rightIndex = mid + 1;
    vector<int> temp; // Temporary array to store merged elements

    // Merge the two halves into the temporary array
    while (leftIndex <= mid && rightIndex <= high)
    {
        if (arr[leftIndex] < arr[rightIndex])
        {
            temp.push_back(arr[leftIndex]);
            leftIndex++;
        }
        else
        {
            temp.push_back(arr[rightIndex]);
            rightIndex++;
        }
    }

    // If there are any remaining elements in the left half
    while (leftIndex <= mid)
    {
        temp.push_back(arr[leftIndex]);
        leftIndex++;
    }

    // If there are any remaining elements in the right half
    while (rightIndex <= high)
    {
        temp.push_back(arr[rightIndex]);
        rightIndex++;
    }

    // Copy the sorted elements from the temporary array back to the original array
    for (int i = 0; i < temp.size(); i++)
    {
        arr[low + i] = temp[i]; // Copy to the correct position in the original array
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2; // Find the middle index

        // Recursively divide the array into two halves
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        // Merge the sorted halves back together
        merge(arr, low, mid, high); // O(n) time complexity
    }
}

void printArray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {3, 4, 6, 5, 7, 1, 3};
    int n = arr.size();

    cout << "Before MergeSort:" << endl;
    printArray(arr, n);
    mergeSort(arr, 0, n - 1);
    cout << "After MergeSort:" << endl;
    printArray(arr, n);

    return 0;
}
