/* Choose the smallest one and place it at its position */

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int siz)
{
    for (int i = 0; i < siz - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < siz; j++) // We are using index (i+1) because we are camparing the i th index with all the remaining numbers
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }

        if (mini != i)
            swap(arr[mini], arr[i]);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
    // Index    00  01  02  03  04
    // Element |03, 05, 02, 13, 12

    // After first pass
    //  00  01  02  03  04
    //  02,|05, 03, 13, 12

    // After second pass
    // 00  01  02  03  04
    // 02, 03,|05, 13, 12

    // After third pass
    // 00  01  02  03  04
    // 02, 03, 05,|13, 12

    // After fourth pass
    // 00  01  02  03  04
    // 02, 03, 05, 12,|13

    int A[] = {3, 5, 2, 13, 12};
    int n = 5;
    printArray(A, n);
    selectionSort(A, n);
    cout << endl;
    printArray(A, n);

    return 0;
}
