class Solution {
public:
    int findprofit(int i,bool canbuy,vector<int>&prices, vector<vector<vector<int>>>&dp,int cap)
    {
        if(i==prices.size()||cap==0)
            return 0;
        
        if(dp[i][canbuy][cap]!=-1)
            return dp[i][canbuy][cap];
        int pick,notpick;
        
        if(canbuy)
        {
             pick=-prices[i]+findprofit(i+1,0,prices,dp,cap);
             notpick=findprofit(i+1,1,prices,dp,cap);
           
        }
        else
        {
             pick=prices[i]+findprofit(i+1,1,prices,dp,cap-1);
             notpick=findprofit(i+1,0,prices,dp,cap);
            
        }
         return dp[i][canbuy][cap]=max(pick,notpick);
    }
    int maxProfit(vector<int>& prices) {
        int cap=2;
        vector<vector<vector<int>>>dp(prices.size(),vector<vector<int>>(2,vector<int>(cap+1,-1)));
        return findprofit(0,1,prices,dp,cap);
    }
};