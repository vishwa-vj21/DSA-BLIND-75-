class Solution {
public:
    vector<vector<int>> directions={{0, 1}, {1, 0}, {-1,0}, {0, -1}};
    int getMaximumGold(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int res=0;
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]!=0){
                    res=max(res, dp(i, j, m, n, res, visited, grid));
                }
            }
        }
        return res;
    }
    int dp(int r, int c, int m, int n, int res, vector<vector<bool>> &visited, vector<vector<int>> &grid){
        int best=0;
        visited[r][c]=true;
        for(auto &dir: directions){
            int row=r+dir[0];
            int col=c+dir[1];
            if(row>=0 && col>=0 && row<m && col<n && grid[row][col]!=0 && visited[row][col]==false){
                best=max(best, dp(row, col, m, n, res, visited, grid));
            }
        }
        visited[r][c]=false;
        return best+grid[r][c];
    }
};