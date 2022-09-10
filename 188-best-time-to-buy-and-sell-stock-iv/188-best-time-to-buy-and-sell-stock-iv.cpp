class Solution {
public:
    int maxProfit(int k, vector<int>& p) {
        vector<vector<vector<int>>>dp(p.size()+1,vector<vector<int>>(2,vector<int>(k+1,0)));
        int pick=0,notpick=0;
        for(int i=p.size()-1;i>=0;i--)
        {
            for(int b=0;b<=1;b++)
            {
                for(int k1=1;k1<=k;k1++)
                {
                    if(b)
                    {
                        pick=-p[i]+dp[i+1][0][k1];
                        notpick=dp[i+1][1][k1];
                    }
                    else{
                        pick=p[i]+dp[i+1][1][k1-1];
                        notpick=dp[i+1][0][k1];
                    }
                    dp[i][b][k1]=max(pick,notpick);
                }
            }
        }
        return dp[0][1][k];
    }
};