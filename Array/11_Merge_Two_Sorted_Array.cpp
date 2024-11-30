#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

/*-----------------------------------------------------

1st Approach

Time Complexity : O(n+m)
Space Complecity : O(1)

-------------------------------------------------------*/

int merge(vector<int> &arr1, int m, vector<int> &arr2, int n)
{

    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 and j >= 0)
    {
        if (arr1[i] > arr2[j])
        {
            arr1[k] = arr1[i];
            i--;
            k--;
        }

        else
        {
            arr1[k] = arr2[j];
            k--;
            j--;
        }
    }

    while (i >= 0)
    {

        arr1[k] = arr1[i];
        i--;
        k--;
    }

    while (j >= 0)
    {
        arr1[k] = arr2[j];
        k--;
        j--;
    }
}

int main()
{

    vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    vector<int> arr2 = {7, 8, 9};

    int m = 3;
    int n = arr2.size();

    merge(arr1, m, arr2, n);
    cout << "The sorted array is ";
    for (int i = 0; i < m + n; i++)
        cout << arr1[i] << " ";

    return 0;
}

