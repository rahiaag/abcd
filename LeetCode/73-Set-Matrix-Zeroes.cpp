class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> rows;
        vector<int> column;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    rows.push_back(i);
                    column.push_back(j);
                }
            }
        }

        for (int i = 0; i < rows.size(); i++) {
            int index = rows[i];
            for (int j = 0; j < m; j++) {
                matrix[index][j] = 0;
            }
        }

        for (int i = 0; i < column.size(); i++) {
            int index = column[i];
            for (int j = 0; j < n; j++) {
                matrix[j][index] = 0;
            }
        }
    }
};