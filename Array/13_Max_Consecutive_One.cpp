#include <bits/stdc++.h>
using namespace std;

int maxOne(vector<int> arr)
{
    int count = 0;
    int result = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        result = max(count, result);
    }
    return result;
}

int main()
{
    vector<int> arr = {0, 0, 1, 1, 1, 0, 1, 1};
    cout << maxOne(arr);
    return 0;
}
