#include <iostream>
#include <vector>
using namespace std;

// Function to heapify a subtree rooted with node i
void heapify(std::vector<int> &arr, int n, int i)
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
        std::swap(arr[i], arr[largest]); // Swap root and largest

        heapify(arr, n, largest);
    }
}

// Main function to do heap sort
void heapSort(vector<int> &arr)
{
    int n = arr.size();

    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // Call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

void printArray(const std::vector<int> &arr)
{
    for (int i : arr)
        std::cout << i << " ";
    std::cout << std::endl;
}

int main()
{
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    heapSort(arr);

    cout << "Sorted array is: ";
    printArray(arr);

    return 0;
}
