/*
Key Points:

- Time Complexity: O(n), where n is the number of elements in the array.
- Suitability: Linear search is simple and straightforward
- Usage: Useful when the array is small

*/

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;

        else if (arr[mid] > key)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof arr / sizeof arr[0];
    int target = 5;

    cout << "The index is " << binarySearch(arr, n, target);
    return 0;
}

