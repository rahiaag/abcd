/*
Question Link : https://codeforces.com/problemset/problem/263/A

Given a 5 × 5 matrix with a single '1' and the rest '0's, find the minimum number of moves to bring the '1' to the center (3rd row, 3rd column). In each move, you can swap either two neighboring rows or two neighboring columns.

Input:
Five lines of five integers, representing the matrix, where only one element is '1' and all others are '0'.

Output:
Print a single integer: the minimum number of moves.

Example:

Input:
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

Output:
3

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> matrix(5, vector<int>(5));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int row = 0;
    int column = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                row = abs(2 - i);
                column = abs(2 - j);
            }
        }
    }

    cout << row + column;

    return 0;
}