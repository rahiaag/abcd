#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach Using Pointer

Time Complexity : O(n)
Space Complecity : O(1)

-------------------------------------------------------*/

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++, end--;
    }
}

/*-----------------------------------------------------

2nd Approach Using Loop

Time Complexity : O(n)
Space Complecity : O(n)

-------------------------------------------------------*/

void ReverseArray(int arr[], int n)
{
    int k = 0;
    int arr1[n];

    for (int i = n - 1; i >= 0; i--)
    {
        arr1[k] = arr[i];
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
}

/*-----------------------------------------------------

3rd Approach Using Recursion

Time Complexity : O(n)
Space Complecity : O(n)  Due to call stack

-------------------------------------------------------*/

void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    swap(arr[start], arr[end]);
    reverseArray(arr, start + 1, end - 1);
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof arr / sizeof arr[0];

    reverse(arr, arr + n); //  3rd Method (Inbuilt function) (#include <algorithm>)
    PrintArray(arr, n);
    cout << endl;

    /*  ReverseArray(arr,n);
      cout<<endl;

      reverseArray(arr,0,n-1);
      PrintArray(arr,n);

      cout<<endl;
      Reversearray(arr,n);*/

    return 0;
}