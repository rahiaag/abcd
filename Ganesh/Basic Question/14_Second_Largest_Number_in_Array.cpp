#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach using Single Pass

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/

int MaxiElement(vector<int> arr)
{
    int largest = INT_MIN;
    int SecondLargest = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            SecondLargest = largest;
        }
        else if (arr[i] > SecondLargest && arr[i] != largest)
        {
            SecondLargest = arr[i];
        }
    }

    if (SecondLargest == INT_MIN)
    {
        return -1;
    }
    return SecondLargest;
}

/*-----------------------------------------------------

1st Approach using Sorting

Time Complexity : O(nLogn)
Space Complexity : O(1)

-------------------------------------------------------*/
int MaximumElement(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    return arr[n - 2];
}

/*-----------------------------------------------------

2nd Approach using Priority Queue (Max Heap)

Time Complexity : O(n)
Space Complexity : O(n) as heap stores the Element

-------------------------------------------------------*/

int maximumElement(vector<int> arr)
{
    // By default Priority queue create MaxHeap
    priority_queue<int> ans;

    // Creating Min Heap priority_queue<int,vector<int>,greater<int>>ans
    int value;
    for (auto i : arr)
    {
        ans.push(i);
    }
    for (int i = 0; i < 2; i++)
    {
        value = ans.top();
        ans.pop();
    }
    return value;
}

/*-----------------------------------------------------

3rd Approach using Priority Queue (Min Heap)

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/

int Maximumelement(vector<int> arr)
{
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (auto i : arr)
    {
        minHeap.push(i);
        if (minHeap.size() > 2)
        {
            minHeap.pop();
        }
    }
    int n = minHeap.top();
    return n;
}

int main()
{
    vector<int> arr = {3, 5, 1, 4, 7, 9, 10};
    cout << "Second Last Element is " << Maximumelement(arr);

    return 0;
}