class Solution {
public:
    int dfs(vector<vector<int>>& grid, int row, int col, vector<vector<int>>& memo) {
        int m = grid.size();
        int n = grid[0].size();
        
        if (memo[row][col] != -1) return memo[row][col];
        
        int maxMoves = 0;
        
        vector<pair<int, int>> directions = {{-1, 1}, {0, 1}, {1, 1}};
        for (auto [dr, dc] : directions) {
            int newRow = row + dr;
            int newCol = col + dc;
            
      
            if (newRow >= 0 && newRow < m && newCol < n && grid[newRow][newCol] > grid[row][col]) {
                maxMoves = max(maxMoves, 1 + dfs(grid, newRow, newCol, memo));
            }
        }
        
 
        return memo[row][col] = maxMoves;
    }
    
    int maxMoves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int result = 0;
        vector<vector<int>> memo(m, vector<int>(n, -1));
        
        // Try starting from each cell in the first column
        for (int row = 0; row < m; ++row) {
            result = max(result, dfs(grid, row, 0, memo));
        }
        
        return result;
    }
};
