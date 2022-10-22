class Solution {
public:
    int countpath(int i,int j, vector<vector<int>>&dp)
    {
        if(i<0||j<0)return 0;
        
        if(i==0&&j==0)
            return dp[i][j]=1;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int up=countpath(i-1,j,dp);
        int left=countpath(i,j-1,dp);
        return dp[i][j]=up+left;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        //return countpath(m-1,n-1,dp);
        countpath(m-1,n-1,dp);
        return dp[m-1][n-1];
    }
};