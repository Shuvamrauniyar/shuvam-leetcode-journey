class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p=0;
        int n=nums.size();
        if(n<2)return n;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[p])
            {
                p++;
                swap(nums[i],nums[p]);
            }
            
        }
        return p+1;
    }
};