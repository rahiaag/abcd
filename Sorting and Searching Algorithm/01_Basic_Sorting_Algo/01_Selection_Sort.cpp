#include <bits/stdc++.h>
using namespace std;

/*
📌 Selection Sort Algorithm:
- Finds the smallest (or largest) element from the unsorted portion and places it at the beginning of the sorted portion.
- After each pass, the smallest element is placed in its correct position.

🔹 Complexity Analysis:
  - Time Complexity: O(n²) (even in the Best Case, due to nested loops)
  - Space Complexity: O(1) (in-place sorting, no extra space required)
  - Not Stable (swapping may change the relative order of equal elements)

✅ Applications:
  - Useful when minimizing the number of swaps is important.
  - Works well for small datasets.
  - Simple and easy to implement.

📌 Real-Life Analogy:
  - Imagine lining up people by height:
    - Find the shortest person and place them first.
    - Then, find the next shortest and place them second.
    - Repeat until everyone is in order.
*/


void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) // Finding the minimum element in the remaining unsorted part
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
            swap(arr[minIndex], arr[i]);
    }
}

void printArray(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // ! Keep care that we are swapping the Element so take that thing in account
    /*
         Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
         Index    00  01  02  03  04
         Element |03, 05, 02, 13, 12

         After first pass
         00  01  02  03  04
         02,|05, 03, 13, 12

         After second pass
         00  01  02  03  04
         02, 03,|05, 13, 12

         After third pass
         00  01  02  03  04
         02, 03, 05,|13, 12

         After fourth pass
         00  01  02  03  04
         02, 03, 05, 12,|13
    */
    vector<int> arr = {3, 5, 2, 13, 12};
    printArray(arr);
    selectionSort(arr);
    cout << endl;
    printArray(arr);

    return 0;
}
