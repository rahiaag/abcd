#include <bits/stdc++.h>
using namespace std;

class Pair
{
public:
    int min;
    int max;
};

void minimum(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Minimum Element is " << min;
}

void maximum(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum Element is " << max;
}

Pair sorting(int arr[], int n)
{
    Pair minmax;
    sort(arr, arr + n);

    minmax.min = arr[0];
    minmax.max = arr[n - 1];

    return minmax;
}

/*-----------------------------------------------------

Another Method Using Priority Queue
Time Complexity : O(n)
Space Complecity : O(1)

-------------------------------------------------------*/

int MaxMin(int arr[],int n){
    priority_queue<int>m;

    for (int i=0;i<n;i++){
        m.push(arr[i]);
    }
    cout<<"Maximum Element is "<<arr[0]<<endl;
    cout<<"Minimum Element is "<<arr[n]<<endl;
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

    /*  minimum(arr,n);
      cout<<endl;

  maximum(arr,n);*/

    MaxMin(arr,n);   // When using Priority Queue

    Pair ran = sorting(arr, n);

    cout << ran.min;
    cout << endl;
    cout << ran.max;

    return 0;
}
