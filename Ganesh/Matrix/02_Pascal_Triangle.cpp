#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> Pascal(int numRows)
{
    vector<vector<int>> result(numRows);

    for (int i = 0; i < numRows; i++)
    {
        result[i] = vector<int>(i + 1, 1);

        for (int j = 1; j < i; j++)
        {
            result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
        }
    }
    return result;
}

int main()
{

    cout << "Enter the Number :" << endl;
    int n;
    cin >> n;

    vector<vector<int>> answer = Pascal(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << answer[i][j]<<" ";
        }
        cout<<endl;
    }
}
