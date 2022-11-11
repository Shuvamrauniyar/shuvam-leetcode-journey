class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
    int count=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
                   
              swap(nums[++i],nums[j]);
                count=0;
            }
            else if(count<1){
                count++;
                swap(nums[++i],nums[j]);
            }
            
            
        }
        return i+1;
    }
};