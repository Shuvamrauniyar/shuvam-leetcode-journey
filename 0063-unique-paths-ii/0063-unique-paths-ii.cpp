class Solution {
public:
    int countpath(int i,int j,vector<vector<int>>& g,vector<vector<int>>&dp)
    {
        if(i<0||j<0)
            return 0;
         if(g[i][j]==1)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(i==0&&j==0)
            return 1;
        
       
        int up=countpath(i-1,j,g,dp);
        int left=countpath(i,j-1,g,dp);
        return dp[i][j]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int r=obstacleGrid.size();
        int c=obstacleGrid[0].size();
        vector<vector<int>>dp(r,vector<int>(c,-1));
        return countpath(r-1,c-1,obstacleGrid,dp);
    }
};