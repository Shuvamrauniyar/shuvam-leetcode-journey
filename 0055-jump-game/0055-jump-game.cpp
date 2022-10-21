class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxjump=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i>maxjump) //maxjump demotes that till which index we can go to and i
                         // 'i' is greater than max jump means we cannot jump to 'i' 
                return false;
            maxjump=max(nums[i]+i,maxjump);
        }
        return true;
    }
};