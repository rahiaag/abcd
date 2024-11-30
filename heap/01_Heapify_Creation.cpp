#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& arr, int n, int i) {
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // Left child index
    int right = 2 * i + 2; // Right child index

    
    if (left < n && arr[left] > arr[largest])
        largest = left;

   
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]); 
        heapify(arr, n, largest); 
    }
}


void buildMaxHeap(vector<int>& arr) {
    int n = arr.size();

    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}


void printArray(const vector<int>& arr) {
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

int main() {
    vector<int> arr = { 12, 11, 13, 5, 6, 7 };
    cout << "Original array: ";
    printArray(arr);

    buildMaxHeap(arr);

    cout << "Max heap: ";
    printArray(arr);

    return 0;
}
