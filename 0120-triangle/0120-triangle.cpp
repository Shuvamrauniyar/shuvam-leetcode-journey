class Solution {
public:
    int find(int i,int j,int n,vector<vector<int>>& t,vector<vector<int>>&dp)
    {
        // if(i<0||j<0)
        //     return 0;
        if(i==n-1)
            return t[i][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
        int up=t[i][j]+find(i+1,j,n,t,dp);
        int crossleft=t[i][j]+find(i+1,j+1,n,t,dp);
        return dp[i][j]=min(up,crossleft);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return find(0,0,n,triangle,dp);
    }
};