// Given Two array count the number of distinct element from the 2 array

/*-----------------------------------------------------

1st Approach Using Set

Time Complexity : O(nlogn)
Space Complecity : O(n+m)

-------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)
{
    set<int> rahi;                                    

    for (int i = 0; i < n; i++)
    {
        rahi.insert(a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        rahi.insert(b[i]);
    }

    return rahi.size();
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
    int a[] = {1, 2, 3, 8};
    int n = sizeof a / sizeof a[0];

    int b[] = {1, 2, 3, 4, 9};
    int m = sizeof b / sizeof b[0];

    cout << "The count of Distinct Element is " << doUnion(a, n, b, m);
    return 0;

    
}


// isme abhi set mein insert karna and traverse karna sikhna hai
