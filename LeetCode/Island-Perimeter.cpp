class Solution {
public:
    int n;
    int m;

    void dfs(vector<vector<int>>& grid, int i, int j, int& perimeter) {
        if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0) {
            perimeter++;
            return;
        }
        if (grid[i][j] == -1) {
            return;
        }

        grid[i][j] = -1;

        dfs(grid, i + 1, j, perimeter);
        dfs(grid, i, j + 1, perimeter);
        dfs(grid, i - 1, j, perimeter);
        dfs(grid, i, j - 1, perimeter);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int perimeter = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0;j < m; j++) {
                if (grid[i][j] == 1) {
                    dfs(grid, i, j, perimeter);
                    return perimeter;
                }
            }
        }
        return -1;
    }
};