class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        if(n<2)return n;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;
                swap(nums[i],nums[j]);
            }
            
        }
        return i+1;
    }
};