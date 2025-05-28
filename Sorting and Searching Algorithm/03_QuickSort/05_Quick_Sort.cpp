#include <bits/stdc++.h>
using namespace std;

/*
QuickSort Algorithm

Advantages of QuickSort over MergeSort:
1. Faster average-case performance O(n log n) compared to MergeSort.
2. Requires only O(log n) extra space *(for recursive stack call)*, making it an in-place sorting algorithm.
3. More cache-efficient due to better memory locality.
4. Easier to implement without additional memory overhead.

Choosing Pivot:
- Start or End: Simple but can lead to unbalanced partitions.
- Middle: More balanced partitioning in most cases.
- Random: Reduces the likelihood of worst-case O(n^2) performance, providing better average performance.

Algorithm:
1. Select a pivot and place it in its correct position.
2. Rearrange elements so that smaller ones are on the left and larger ones are on the right.
3. Recursively apply QuickSort to the left and right partitions.

Time Complexity:
Best and average case: O(n log n)
Worst case (when partitioning is unbalanced): O(n^2)

Applications:
- Efficient for large datasets due to low overhead.
- Not a stable sorting algorithm.
*/

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;

    for (int j = low +1 ; j <= high; j++)
    {
        if (arr[j] <= pivot)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    swap(arr[low], arr[i - 1]);
    return i - 1;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int part = partition(arr, low, high);
        quickSort(arr, low, part - 1);
        quickSort(arr, part + 1, high);
    }
}

void printArray(const vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {2, 5, 1, 7, 80, 10};

    cout << "Before QuickSort:" << endl;
    printArray(arr);

    quickSort(arr, 0, arr.size() - 1);

    cout << "After QuickSort:" << endl;
    printArray(arr);

    return 0;
}
