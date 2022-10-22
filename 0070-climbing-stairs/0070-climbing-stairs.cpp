class Solution {
public:
    int findways(int i,vector<int>&dp)
    {
           if(i==1)
            return 1;
        if(i<=0)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        //cout<<dp[i-1]<<' ';
      return dp[i]=findways(i-1,dp)+findways(i-2,dp);
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        dp[0]=1,dp[1]=1; //you can also use prev curr technique to optimise space by not declaring dp vector
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
       //  findways(n,dp);
        
        return dp[n];
    }
};