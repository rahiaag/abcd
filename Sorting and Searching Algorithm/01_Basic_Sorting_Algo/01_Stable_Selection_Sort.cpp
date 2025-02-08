#include <bits/stdc++.h>
using namespace std;

/*
Selection sort can be made stable by placing the minimum element in its correct position without swapping.
Instead of swapping, the minimum element is inserted into its correct position by shifting the other elements one step to the right.
*/

void stableSelectionSort(vector<int> &arr)
{
    int n = arr.size();

    // Loop through the array to find the minimum element in the unsorted part
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        // Find the index of the minimum element in the unsorted part
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // If the minimum element is not already in the correct position, shift elements
        if (minIndex != i)
        {
            int temp = arr[minIndex];

            // Shift elements from minIndex to i one step to the right
            for (int k = minIndex; k > i; k--)
            {
                arr[k] = arr[k - 1];
            }

            // Place the minimum element at its correct position
            arr[i] = temp;
        }
    }
}

void printVector(const vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {3, 5, 2, 13, 12};

    cout << "Original Array: ";
    printVector(arr);

    stableSelectionSort(arr);

    cout << "Sorted Array: ";
    printVector(arr);

    return 0;
}
