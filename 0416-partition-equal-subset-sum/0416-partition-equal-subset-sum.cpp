class Solution {
public:
    //changing parameters are index i and int target
    //sow we will create 2D dp table array
    bool check(int i,vector<int>&nums,int target,vector<vector<int>>&dp)
    {
        if(i<0||target==0)
            return !target;
        bool pick=0;
        if(dp[i][target]!=-1)
            return dp[i][target];
        if(nums[i]<=target)
            pick=check(i-1,nums,target-nums[i],dp);
        int notpick=check(i-1,nums,target,dp);
        return dp[i][target]=(pick||notpick);
        
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int totsum=0;
        
        for(int num:nums)
            totsum+=num;
        if(totsum%2!=0)
            return false;
       int target=totsum/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return check(n-1,nums,target,dp);
            
    }
};