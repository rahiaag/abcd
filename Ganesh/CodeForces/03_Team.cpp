/*
Question Link : https://codeforces.com/problemset/problem/231/A

Given n problems, for each problem, three integers (0 or 1) represent whether each friend (Petya, Vasya, and Tonya) is sure about the solution. If at least two friends are sure (value 1), they will implement the solution. Find the number of problems they will implement.

Input:

An integer n (1 ≤ n ≤ 1000).
Followed by n lines with three integers (0 or 1) per line.
Output:
Print a single integer — the count of problems they will implement.

Example:
Input:

3
1 1 0
1 1 1
1 0 0

Output:
2

*/

#include <bits/stdc++.h>
using namespace std;

int friendSolution(vector<vector<int>> matrix)
{
    int result = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 1)
            {
                count++;
            }
        }
        if (count >= 2)
        {
            result++;
        }
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << friendSolution(matrix);
    return 0;
}


// To create a Matrix
// vector<vector<int>>matrix(n,vector<int>(3))