#include <bits/stdc++.h>
using namespace std;

/*
📌 Bubble Sort Algorithm:
- Repeatedly swap adjacent elements if they are in the wrong order.
- After each pass, the largest unsorted element moves to its correct position.
- Optimized with a `swapped` flag to stop early if the array is already sorted.

🔹 Complexity Analysis:
  - Best Case: O(n) (when the array is already sorted)
  - Worst Case: O(n²) (when the array is in reverse order)
  - Space Complexity: O(1) (in-place sorting)
  - Stability: Bubble Sort is stable (preserves the relative order of equal elements).

✅ Applications:
  - Useful for small datasets.
  - Simple and easy to implement.
  - Good for learning sorting concepts.

📌 Real-Life Analogy:
  - Imagine sorting a line of people by height:
    - Compare two people at a time.
    - If the taller one is ahead of the shorter one, swap them.
    - Repeat until everyone is in the correct order.
*/

void BubbleSort(vector<int> &arr, int n)
{

    for (int i = 0; i < n - 1; i++) // After i-1 iteration the element will be in sorted if 7 element are there and 6 are in correct position then 7th one will be automatically in correct position
    {
        bool swapped = false; // Flag to check if any swaps occurred
        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
                swapped = true;
            }
        }

        if (!swapped) // If no swaps were made, array is already sorted
            break;
    }
}

void printArray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    /*
    Initial Array: [5, 3, 8, 4, 2]

    Pass 1:
    Swap 5 and 3: [3, 5, 8, 4, 2]  as 5 and 8 are already sorted so no swap
    Swap 8 and 4: [3, 5, 4, 8, 2]
    Swap 8 and 2: [3, 5, 4, 2, 8]

    Pass 2:
    Swap 5 and 4: [3, 4, 5, 2, 8]
    Swap 5 and 2: [3, 4, 2, 5, 8]

    Pass 3:
    Swap 4 and 2: [3, 2, 4, 5, 8]

    Pass 4:
    Swap 3 and 2: [2, 3, 4, 5, 8]

    Final Sorted Array: [2, 3, 4, 5, 8]

    */
    vector<int> arr = {6, 0, 3, 5};
    int n = arr.size();

    printArray(arr, n);
    BubbleSort(arr, n);
    cout << endl;
    printArray(arr, n);
}