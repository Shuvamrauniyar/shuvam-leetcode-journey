class Solution {
public:
    int findprofit(int i,int canbuy,int k,vector<int>&prices,vector<vector<vector<int>>>&dp)
    {
        if(i==prices.size()||k==0)
            return 0;
        if(dp[i][canbuy][k]!=-1)
            return dp[i][canbuy][k];
        int pick,notpick;
        if(canbuy)
        {
            pick=-prices[i]+findprofit(i+1,0,k,prices,dp);
            notpick=findprofit(i+1,1,k,prices,dp);
        }
        else
        {
            pick=prices[i]+findprofit(i+1,1,k-1,prices,dp);
            notpick=findprofit(i+1,0,k,prices,dp);
        }
        return dp[i][canbuy][k]=max(pick,notpick);                                                                         
    }
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<vector<int>>>dp(prices.size(),vector<vector<int>>(2,vector<int>((k+1),-1)));
        return findprofit(0,1,k,prices,dp);
        
    }
};