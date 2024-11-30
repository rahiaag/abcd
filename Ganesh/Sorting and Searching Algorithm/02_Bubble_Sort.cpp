// Compares adjacent element and then swapping them

#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false; // To optimize if no swaps are made
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

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {6, 0, 3, 5};
    int n = sizeof arr / sizeof arr[0];

    printArray(arr, n);
    BubbleSort(arr, n);
    cout << endl;
    printArray(arr, n);
}