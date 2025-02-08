#include <bits/stdc++.h>
using namespace std;

// Search in Sorted Matrix

/*-----------------------------------------------------

1st Approach

Time Complexity : O(N^2)
Space Complecity : O(1)

-------------------------------------------------------*/

bool SearchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

/*-----------------------------------------------------

2nd Approach Using Binary Search

Time Complexity : O(N)
Space Complecity : O(1)

-------------------------------------------------------*/

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    //     int n = matrix.size();
    //     int m = matrix[0].size();

    //     int low = 0;
    //     int high = n * m - 1;

    //     while (low < high)
    //     {
    //         int mid = (low + high) / 2;

    //         int row = mid / n;
    //         int column = mid % m;
    //     }
    // }

    int n = matrix.size();
    int m = matrix[0].size();

    int low = 0;
    int high = (n * m) - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        int row = mid / m;
        int column = mid % m;

        if (matrix[row][column] == target)
        {
            return true;
        }
        else if (matrix[row][column] < target)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    return false;
}

void traversal(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    // The matrix is sorted

    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int target = 11;

    cout << boolalpha << searchMatrix(matrix, target);

    return 0;
}