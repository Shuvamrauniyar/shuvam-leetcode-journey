class Solution {
public:
    int find(int i,int target,vector<int>&nums)
    {
        if(i<0)
        {
            if(target==0)
                return 1;
            return 0;
        }
        int add=find(i-1,target-nums[i],nums);
        int sub=find(i-1,target+nums[i],nums);
        return add+sub;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        return find(n-1,target,nums);
    }
};