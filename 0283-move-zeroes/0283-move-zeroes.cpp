class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0&&nums[j]==0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
            else if(nums[j]!=0)
                j++;
        }
    }
};