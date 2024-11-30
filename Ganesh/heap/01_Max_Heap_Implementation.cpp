#include <iostream>
#include <vector>
using namespace std;

void maxHeapify(vector<int> &arr, int n, int i)
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
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

void buildMaxHeap(vector<int> &arr)
{
    int n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--)
    {
        maxHeapify(arr, n, i);
    }
}

// Function to insert a new element into the max-heap
void insertMaxHeap(vector<int> &arr, int key)
{
    arr.push_back(key);     // Insert the new element at the end
    int i = arr.size() - 1; // Index of the new element

    // Fix the max-heap property if it is violated
    while (i != 0 && arr[(i - 1) / 2] < arr[i])
    {
        swap(arr[i], arr[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// Function to delete an element at index i from the max-heap
void deleteMaxHeap(vector<int> &arr, int i)
{
    int n = arr.size();
    if (i >= n)
        return;

    // Move the last element to the root and reduce heap size
    arr[i] = arr[n - 1];
    arr.pop_back();

    // Heapify the root element to maintain the max-heap property
    maxHeapify(arr, arr.size(), i);
}

// Function to extract the maximum element (root) from the max-heap
int extractMax(vector<int> &arr)
{
    if (arr.size() == 0)
        return -1; // Heap is empty

    if (arr.size() == 1)
    {
        int max = arr[0];
        arr.pop_back();
        return max;
    }

    int max = arr[0];
    arr[0] = arr[arr.size() - 1];
    arr.pop_back();

    // Heapify the root element to maintain the max-heap property
    maxHeapify(arr, arr.size(), 0);

    return max;
}

void printArray(const vector<int> &arr)
{
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

int main()
{
    vector<int> maxHeap = {12, 11, 13, 5, 6, 7};
    cout << "Original max-heap array: ";
    printArray(maxHeap);

    buildMaxHeap(maxHeap);
    cout << "Max-heap after build: ";
    printArray(maxHeap);

    insertMaxHeap(maxHeap, 15);
    cout << "Max-heap after inserting 15: ";
    printArray(maxHeap);

    deleteMaxHeap(maxHeap, 2); // Delete element at index 2
    cout << "Max-heap after deleting index 2: ";
    printArray(maxHeap);

    int maxElement = extractMax(maxHeap);
    cout << "Max element extracted: " << maxElement << endl;
    cout << "Max-heap after extraction: ";
    printArray(maxHeap);

    return 0;
}
