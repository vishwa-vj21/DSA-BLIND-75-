class Solution {
public:
    
    int helper(int i, int j, vector<vector<int>>& grid, vector<vector<int>> &dp){
        if(i<0 || j<0) return 1e9;
        if(i==0 && j==0) return grid[0][0];
        if(dp[i][j]!=-1) return dp[i][j];
        
            int left=helper(i, j-1, grid, dp);
            int top=helper(i-1, j, grid, dp);
            dp[i][j]=grid[i][j]+min(left, top);
            return dp[i][j];
        
    }
    int minPathSum(vector<vector<int>>& grid) {
        
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<int>> dp(r, vector<int>(c, -1));
        return helper(r-1, c-1, grid, dp);
    }
};