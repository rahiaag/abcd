#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach

Time Complexity : O(n+m)
Space Complexity : O(n+m)

-------------------------------------------------------*/

void MergeSortedArray(vector<int> &arr1, vector<int> &arr2)
{

    int n = arr1.size();
    int m = arr2.size();

    vector<int> arr3(n + m);

    int i = 0;
    int j = 0;

    int k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
    arr1 = arr3;
}

/*-----------------------------------------------------

2nd Approach

Time Complexity : O(n+m)
Space Complexity : O(n+m)

-------------------------------------------------------*/

void MergeArray(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();

    int k = m + n - 1;
    vector<int> arr3(k);

    int low = n - 1;
    int low2 = m - 1;

    while (low >= 0 && low2 >= 0)
    {
        if (arr1[low] > arr2[low2])
        {
            arr3[k--] = arr1[low--];
        }
        else
        {
            arr3[k--] = arr2[low2--];
        }
    }

    while (low >= 0)
    {

        arr3[k--] = arr1[low--];
    }

    while (low2 >= 0)
    {
        arr3[k--] = arr2[low2--];
    }

    arr1 = arr3;
}

int main()
{
    vector<int> arr1 = {9, 10, 11, 15, 20};
    vector<int> arr2 = {1, 2, 4, 6, 8, 10};

    cout << "Before Merging" << endl;
    for (auto i : arr1)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "After Merging" << endl;
    // MergeSortedArray(arr1, arr2);
    MergeArray(arr1, arr2);
    for (auto i : arr1)
    {
        cout << i << " ";
    }

    return 0;
}