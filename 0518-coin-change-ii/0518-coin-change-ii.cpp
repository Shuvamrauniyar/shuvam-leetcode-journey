class Solution {
public:
    int find(int i,int amount,vector<int>&coins,vector<vector<int>>&dp)
    {
        if(i==0)
        {
            if(amount==0)
                return 1;
            if(amount%coins[i]==0)
                return 1;
            else
                return 0;
        }
            if(dp[i][amount]!=-1)
                return dp[i][amount];
        int pick=0;
        if(coins[i]<=amount)
            pick=find(i,amount-coins[i],coins,dp);
        
        int notpick=find(i-1,amount,coins,dp);
        return dp[i][amount]=pick+notpick;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return find(n-1,amount,coins,dp);
    }
};