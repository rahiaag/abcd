#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> arr, int Key)
{

    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == Key)
        {
            return mid;
        }
        else if (arr[mid] < Key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << "Enter the key :" << endl;
    int key;
    cin >> key;

    cout << "The Element is Present at index :" << BinarySearch(arr, key);

    return 0;
}