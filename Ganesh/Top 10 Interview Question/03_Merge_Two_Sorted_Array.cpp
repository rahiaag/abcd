#include <bits/stdc++.h>
using namespace std;

void MergeSortedArray(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    int i = 0;
    int j = 0;
    int k = 0;

    vector<int> arr3(n + m - 1);

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

    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }

    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    // makes arr1 point to the same array as arr3. Changes to the array via arr1 will also affect arr3. It DOES NOTZ copy the element
    arr1 = arr3;  
}
int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr2 = {4, 5, 6, 7, 8};

    MergeSortedArray(arr1,arr2);
    for (auto i:arr1){
        cout<<i<<" ";
    }
    return 0;
}