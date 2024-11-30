// we just need to swap matrix[i][j] with matrix[j][i]

#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach Using Loop

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/

vector<vector<int>> MatrixTranspose(vector<vector<int>> &matrix)
{

    int n = matrix.size();
    int m = matrix[0].size(); // matrix[0] refers to the first row, and .size() on it gives the number of elements in that row, i.e., the number of columns.

    vector<vector<int>> value(m, vector<int>(n, 0));
    /*
     The original matrix has n rows and m columns.
     The transposed matrix should have m rows and
     n columns (swap the dimensions).
     */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            value[j][i] = matrix[i][j];
        }
    }
    return value;
}

/*-----------------------------------------------------

Using Alternative Signature

Time Complexity : O(n^2)
Space Complexity : O(1)

-------------------------------------------------------*/

void matrixTranspose(vector<vector<int>> &matrix)
{

    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void PrintMatrix(vector<vector<int>> matrix)
{

    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix =
        {{1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}};

    cout << "Before Transpose" << endl;
    PrintMatrix(matrix);

    vector<vector<int>> ans = MatrixTranspose(matrix);

    cout << "After Transpose" << endl;

    PrintMatrix(ans);
    // PrintMatrix(matrix);

    return 0;
}