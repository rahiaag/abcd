#include <iostream>
#include <vector>
using namespace std;

void heapifyMin(vector<int> &arr, int n, int i)
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] < arr[smallest])
        smallest = left;
    if (right < n && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        heapifyMin(arr, n, smallest);
    }
}

// Function to build a min-heap
void buildMinHeap(vector<int> &arr)
{
    int n = arr.size();

    // Start from the middle of the array and heapify each node
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapifyMin(arr, n, i);
    }
}

// Function to insert a new element into the min-heap
void insertMin(vector<int> &arr, int key)
{
    arr.push_back(key);     // Add the new element at the end
    int i = arr.size() - 1; // Index of the new element

    // Fix the min-heap property if it is violated
    while (i != 0 && arr[(i - 1) / 2] > arr[i])
    {
        swap(arr[i], arr[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// Function to delete an element at index i from the min-heap
void deleteMin(vector<int> &arr, int i)
{
    int n = arr.size();
    if (i >= n)
        return;

    // Move the last element to the root and reduce heap size
    arr[i] = arr[n - 1];
    arr.pop_back();

    // Heapify the root element to maintain the min-heap property
    heapifyMin(arr, arr.size(), i);
}

// Function to extract the minimum element (root) from the min-heap
int extractMin(vector<int> &arr)
{
    if (arr.size() == 0)
        return -1; // Heap is empty

    if (arr.size() == 1)
    {
        int min = arr[0];
        arr.pop_back();
        return min;
    }

    int min = arr[0];
    arr[0] = arr[arr.size() - 1];
    arr.pop_back();

    // Heapify the root element to maintain the min-heap property
    heapifyMin(arr, arr.size(), 0);

    return min;
}

// Function to print an array
void printArray(const vector<int> &arr)
{
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

int main()
{
    vector<int> arrMin = {12, 11, 13, 5, 6, 7};
    cout << "Original min heap array: ";
    printArray(arrMin);

    buildMinHeap(arrMin);
    cout << "Min heap after construction: ";
    printArray(arrMin);

    insertMin(arrMin, 3);
    cout << "Min heap after inserting 3: ";
    printArray(arrMin);

    cout << "Extracted min element: " << extractMin(arrMin) << endl;
    cout << "Min heap after extraction: ";
    printArray(arrMin);

    deleteMin(arrMin, 2); // Delete element at index 2
    cout << "Min heap after deleting index 2: ";
    printArray(arrMin);

    return 0;
}

