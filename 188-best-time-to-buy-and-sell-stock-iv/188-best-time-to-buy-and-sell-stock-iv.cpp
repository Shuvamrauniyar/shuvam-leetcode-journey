class Solution {
public:
    int maxProfit(int k, vector<int>& p) {
        // vector<vector<vector<int>>>dp(p.size()+1,vector<vector<int>>(2,vector<int>(k+1,0)));
        vector<vector<int>>cur(2,vector<int>(k+1,0));
        vector<vector<int>>next(2,vector<int>(k+1,0));
        int pick=0,notpick=0;
        for(int i=p.size()-1;i>=0;i--)
        {
            for(int b=0;b<=1;b++)
            {
                for(int k1=1;k1<=k;k1++)
                {
                    if(b)
                    {
                        pick=-p[i]+next[0][k1];
                        notpick=next[1][k1];
                    }
                    else{
                        pick=p[i]+next[1][k1-1];
                        notpick=next[0][k1];
                    }
                    cur[b][k1]=max(pick,notpick);
                }
            }
            next=cur;
        }
        return cur[1][k];
    }
};