class Solution {
public:
    int findways(int i,vector<int>&dp)
    {
           if(i==0)
            return 1;
        if(i<0)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
      return dp[i]=findways(i-1,dp)+findways(i-2,dp);
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
         findways(n,dp);
        return dp[n];
    }
};