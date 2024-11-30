#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach Sorting (Brute)

Time Complexity : O(nlogn)
Space Complecity : O(1)

-------------------------------------------------------*/

void KthElement(int arr[], int n, int k)        
{
    sort(arr, arr + n);
    cout << "The " << k << "th Minimum Element is " << arr[k - 1];
}

/*-----------------------------------------------------

2nd Approach Using Priority Queue

Time Complexity : O(n)
Space Complecity : O(n)

-------------------------------------------------------*/
int Kthelement(int arr[], int n, int k) {
    priority_queue<int>mp;

    for (int i=0;i<n;i++){
        mp.push(arr[i]);
    }
    for (int i=0;i<k-1;i++){
        mp.pop();
    }
    return mp.top();
}



int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof arr / sizeof arr[0];

    //cout<<"The smallest element is "<< kthSmallest(arr, 0, 7, 4); 
    cout<<endl;
   // KthElement(arr, n, 4);
cout<<endl;
    cout<<"The largest element is "<< Kthelement(arr,n,2) ; 
    cout<<endl;

    return 0;
}
