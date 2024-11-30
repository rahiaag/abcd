#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{

    int n = matrix.size();    // Size of Rows
    int m = matrix[0].size(); // Size of Column

    vector<int> x;
    vector<int> y;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                x.push_back(i);
                y.push_back(j);
            }
        }
    }

    // for Rows

    for (int i = 0; i < x.size(); i++)
    {
        int index = x[i];
        for (int j = 0; j < m; j++)
        {
            matrix[index][j] = 0;
        }
    }
    // for Column

    for (int i = 0; i < y.size(); i++)
    {
        int index = y[i];
        for (int j = 0; j < n; j++)
        {
            matrix[j][index] = 0;
        }
    }
}

void traversal(vector<vector<int>> &matrix)
{
    int n = matrix.size(); // Size of Rows
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
    vector<vector<int>> matrix = {{1, 0, 3}, {2, 1, 0}, {2, 3, 4}};

    setZeroes(matrix);
    traversal(matrix);

    return 0;
}