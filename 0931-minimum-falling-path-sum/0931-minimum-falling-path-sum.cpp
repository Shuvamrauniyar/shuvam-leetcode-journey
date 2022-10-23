class Solution {
public:
    
    int find(int i,int j,int n,vector<vector<int>>& m,vector<vector<int>>&dp)
    {
        if(i==n-1&&j>=0&&j<n)
            return m[i][j];
        if(j<0||j>=n)
            return 1e9;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int leftdown=m[i][j]+find(i+1,j-1,n,m,dp);
        int down=m[i][j]+find(i+1,j,n,m,dp);
        int rightdown=m[i][j]+find(i+1,j+1,n,m,dp);
        return dp[i][j]=min(leftdown,min(down,rightdown));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
       
        int mini=INT_MAX;
        for(int i=0;i<matrix[0].size();i++){
             vector<vector<int>>dp(n,vector<int>(n,-1));
        mini=min(mini,find(0,i,n,matrix,dp));
        }
        return mini;
    }
};