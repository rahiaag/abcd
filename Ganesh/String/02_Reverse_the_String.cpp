#include <bits/stdc++.h>
using namespace std;

int length(char arr[])
{
    int count = 0;
    while (arr[count] != '\0')
    {
        count++;
    }
    return count;
}

void reverse(char arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low++], arr[high--]); // Elephant  pelEtnah   hantElep
    }
}

void reverseString(vector<char> arr, int low) // In Case of vector we can easily use size
{
    int high = arr.size() - 1;
    while (low < high)
    {
        swap(arr[low++], arr[high--]);
    }
}

int main()
{
    char arr[20];

    cout << "Enter the name :";
    cin >> arr;

    int len = length(arr);

    reverse(arr, 0, len - 1);     // Normal Reverse
    reverse(arr, 0, len / 2 - 1); // Follow up Question (Reverse the half and then reverse the other half )
    reverse(arr, len / 2, len - 1);

    for (int i = 0; arr[i] != '\0'; i++)

        cout << arr[i];

    return 0;
}
