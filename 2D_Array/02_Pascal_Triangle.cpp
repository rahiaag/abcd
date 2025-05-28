#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> Pascal(int numRows)
{
    vector<vector<int>> result;

    for (int i = 0; i < numRows; i++)
    {
        vector<int> ans(i + 1, 1);

        for (int j = 1; j < i; j++)
        {
            ans[j] = result[i - 1][j - 1] + result[i - 1][j];
        }
        result.push_back(ans);
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
        for (int j = 0; j < i + 1; j++)
        {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
}
