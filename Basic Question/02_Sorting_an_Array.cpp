#include <bits/stdc++.h>
using namespace std;
/*-----------------------------------------------------

Bubble Sort (Stable)
Comparing the Adjacent Element and swapping the smaller one

Best Case Time Complexity : O(N)
In an already sorted array, no swaps will be needed

Worst Case Time Complexity : O(N^2)

Space Complexity : O(1)
-------------------------------------------------------*/

void BubbleSort(vector<int> &arr)
{

    for (int i = 0; i < arr.size() - 1; i++)
    {
        bool swapped = false; // To optimize if no swaps are made
        for (int j = 0; j < arr.size() - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
        { // If no swaps were made, array is already sorted
            break;
        }
    }
}

/*-----------------------------------------------------

Selection Sort(Not Stable)
Repeatedly choose the Smallest one and place it in its Position

Best Case Time Complexity : O(N^2)
Selection Sort still performs O(N²) comparisons because it always searches for the minimum element in each pass

Worst Case Time Complexity : O(N^2)

Space Complexity : O(1)

-------------------------------------------------------*/

void SelectionSort(vector<int> &arr)
{

    for (int i = 0; i < arr.size() - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[mini])
                mini = j;
        }

        if (mini != i)
            swap(arr[mini], arr[i]);
    }
}

/*-----------------------------------------------------
Insertion Sort (Stable)

Taking an Unsorted Element and inserting it into correct position within the already sorted Portion

Best Case Time Complexity : O(N)
In an already sorted array, each element is already in its correct position, so no shifts will be needed

Worst Case Time Complexity : O(N^2)

Space Complexity : O(1)

-------------------------------------------------------*/

void InsertionSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void PrintArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arr = {4, 2, 5, 8, 6, 3, 5};
    cout << "Before Sorting" << endl;
    PrintArray(arr);
    cout << endl;
    BubbleSort(arr);
    // SelectionSort(arr);
    cout << "After Sorting" << endl;

    PrintArray(arr);
}

int count(int N)
{
    int count2 = 0;

    for (int i = 1; i <= N; i++){
        int count = 0;
        for (int j = 1; j <= sqrt(i); j++){
            if (i % j == 0){
                count++;

                if (j != i / j)
                    count++;
            }
        }
        if (count % 2 != 0){
            count2++;
        }
    }
    return count2;
}