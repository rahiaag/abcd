// Rotate Matrix by 90 Degree

#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach we will take transpose of the matrix and then reverse each row 

Time Complexity : O(N^2)
Space Complecity : O(1)

-------------------------------------------------------*/

void result(vector<vector<int>> &matrix)
{
    vector<vector<int>> ans;
    int n = matrix.size();
    int m = matrix[0].size();

    // Transpose the matrix

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // now reverse the rows
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

void traversal(vector<vector<int>> &matrix)   // Traversal always take O(N^2) Time complexity in Matrix
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
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Before Traversal :" << endl;
    traversal(matrix);
    result(matrix);
    cout << "After Traversal :" << endl;
    traversal(matrix);

    return 0;
}
