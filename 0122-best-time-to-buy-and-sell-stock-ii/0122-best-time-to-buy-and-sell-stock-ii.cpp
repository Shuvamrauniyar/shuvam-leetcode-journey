class Solution {
public:
    int findprofit(int i,bool canbuy,vector<int>&prices, vector<vector<int>>&dp)
    {
        if(i==prices.size())
            return 0;
        if(dp[i][canbuy]!=-1)
            return dp[i][canbuy];
        int pick,notpick;
        
        if(canbuy)
        {
             pick=-prices[i]+findprofit(i+1,0,prices,dp);
             notpick=findprofit(i+1,1,prices,dp);
           
        }
        else
        {
             pick=prices[i]+findprofit(i+1,1,prices,dp);
             notpick=findprofit(i+1,0,prices,dp);
            
        }
         return dp[i][canbuy]=max(pick,notpick);
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        return findprofit(0,1,prices,dp);
    }
};