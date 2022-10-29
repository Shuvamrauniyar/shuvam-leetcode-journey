class Solution {
public:
    int find(int i,int target,vector<int>&nums,vector<vector<int>>&dp)
    {
        if(i==0)
        {
            if(target==0&&nums[i]==0)return 2;
            
            if(target==0||target==nums[i])return 1;
            return 0;
        }
        if(dp[i][target]!=-1)
            return dp[i][target];
        int pick=0;
        if(nums[i]<=target)
         pick=find(i-1,target-nums[i],nums,dp);
        int notpick=find(i-1,target,nums,dp);
        return dp[i][target]=pick+notpick;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        for(int i:nums)
            s+=i;
        if(s<target||(s-target)%2!=0)return 0;
        target=(s-target)/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return find(n-1,target,nums,dp); 
    }
};