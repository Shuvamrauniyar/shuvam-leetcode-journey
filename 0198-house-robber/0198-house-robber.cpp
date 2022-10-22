class Solution {
public:
    int maxmoney(int i,vector<int>&nums,vector<int>&dp)
    {

        if(i<0)
            return 0;
        //int pick =0;
        if(dp[i]!=-1)
            return dp[i];
        int pick=nums[i]+maxmoney(i-2,nums,dp);
        int notpick=maxmoney(i-1,nums,dp);
        return dp[i]=max(pick,notpick);
        
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        maxmoney(n-1,nums,dp);
        // for(int num:dp)
        // cout<<num<<" ";
        // cout<<endl;
            return dp[n-1];
        //return maxmoney(n-1,nums,dp);
    }
};