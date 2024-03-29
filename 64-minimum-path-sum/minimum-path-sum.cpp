class Solution {
public:
int TopDown(int i,int j,vector<vector<int>> &grid,vector<vector<int>> &dp){
    if(i == 0 && j == 0)return grid[i][j];
    if(i < 0 || j <0)return 1e9;
    if(dp[i][j] != -1) return dp[i][j];
    
    int up = grid[i][j] + TopDown(i-1,j,grid,dp);
    int left = grid[i][j] + TopDown(i,j-1,grid,dp);
    
    return dp[i][j] = min(up,left);
}
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n,vector<int>(m,-1));
    return TopDown(n-1, m-1,grid,dp);
    }
};