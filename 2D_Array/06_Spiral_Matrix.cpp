#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    
    int rowBegin=0;
    int rowEnd=matrix.size()-1;
    int columnBegin=0;
    int columnEnd=matrix[0].size()-1;
    vector<int>ans;

    while (rowBegin<=rowEnd && columnBegin<=columnEnd){
        for (int i=columnBegin;i<=columnEnd;i++){
            ans.push_back(matrix[rowBegin][i]);
        }
        rowBegin++;

        for (int i=rowBegin;i<=rowEnd;i++){
            ans.push_back(matrix[i][columnEnd]);
        }
        columnEnd--;

        if (columnBegin<=columnEnd){
            for (int i=columnEnd;i>=columnBegin;i--){
                ans.push_back(matrix[rowEnd][i]);
            }
        }
        rowEnd--;

        if (rowBegin<=rowEnd){
            for (int i=rowEnd;i>=rowBegin;i--){
                ans.push_back(matrix[i][columnBegin]);
            }
        }
        columnBegin++;
    }
    return ans;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = spiralOrder(matrix);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
