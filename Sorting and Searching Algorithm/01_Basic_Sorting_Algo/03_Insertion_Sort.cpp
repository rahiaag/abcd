#include <bits/stdc++.h>
using namespace std;

/*
Insertion Sort Algorithm:
- Iteratively inserts an element from the unsorted portion of the array into its correct position in the sorted portion.
- Efficient for small datasets or nearly sorted arrays.

Complexity Analysis:
- Best Case Time Complexity: O(n) (when the array is already sorted).
- Worst Case Time Complexity: O(n^2) (when the array is in reverse order).
- Space Complexity: O(1) (in-place sorting, no extra space required).
- Stable Algorithm (preserves the relative order of equal elements).

Applications:
- Useful when the array has a small number of elements.
- Efficient when only a few elements are left to be sorted.

Real Life Analogy
- Think of this as sorting playing cards. You take one card at a time from the unsorted pile and insert it into
  the correct position in the sorted pile.

*/

void insertionSort(vector<int> &arr)
{
    int n = arr.size();

    // Traverse from the second element to the last
    for (int i = 1; i < n; i++)
    {
        int key = arr[i]; // The element to be placed in the correct position
        int j = i - 1;

        // Shift elements of the sorted part that are greater than key
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        // Insert key at its correct position
        arr[j + 1] = key;
    }
}

void printArray(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {6, 0, 3, 5};

    printArray(arr);
    insertionSort(arr);
    printArray(arr);

    return 0;
}
