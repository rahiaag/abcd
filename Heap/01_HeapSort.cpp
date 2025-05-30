/*
Time Complexity : O(nLogn)
*/

#include <bits/stdc++.h>
using namespace std;

// Function to heapify a subtree rooted with node i
void heapify(vector<int> &arr, int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(arr[i], arr[largest]); // Swap root and largest

        heapify(arr, n, largest);
    }
}
void buildMinHeap(vector<int> &arr)
{
    int n = arr.size();

    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)   // we start from the n/2 because leaf nodes does not have anything to heapify
        heapify(arr, n, i);
}
// Main function to do heap sort
void heapSort(vector<int> &arr)
{
    int n = arr.size();

    buildMinHeap(arr);

    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // Call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

void printArray(vector<int> &arr)
{
    for (int i : arr)
        cout << i << " ";
    cout <<   endl;
}

int main()
{
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    heapSort(arr);

    cout << "Sorted array is: ";
    printArray(arr);

    return 0;
}
