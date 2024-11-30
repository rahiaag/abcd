/*
### Advantages of Quick Sort over Merge Sort

1. Average-case Performance: Generally faster in practice.
2. In-place Sorting: Requires (O(log n) extra space.
3. Cache Efficiency: Better cache performance on arrays.
4. Simpler Implementation: Easier to implement and understand.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

// function to rearrange array (find the partition point)
int partition(int array[], int low, int high)
{

    int pivot = array[high]; // select the rightmost element as pivot

    // pointer for greater element
    int i = (low - 1);

        for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {

            // if element smaller than pivot is found
            // swap it with the greater element pointed by i
            i++;

            swap(array[i], array[j]);
        }
    }

    // swap pivot with the greater element at i
    swap(array[i + 1], array[high]);

    return (i + 1);
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {

        // find the pivot element such that
        // elements smaller than pivot are on left of pivot
        // elements greater than pivot are on righ of pivot
        int pi = partition(array, low, high);

        // recursive call on the left of pivot
        quickSort(array, low, pi - 1);

        // recursive call on the right of pivot
        quickSort(array, pi + 1, high);
    }
}

int main()
{
    int data[] = {8, 7, 6, 1, 0, 9, 2};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Unsorted Array: \n";
    printArray(data, n);

    quickSort(data, 0, n - 1);

    cout << "Sorted array in ascending order: \n";
    printArray(data, n);
}