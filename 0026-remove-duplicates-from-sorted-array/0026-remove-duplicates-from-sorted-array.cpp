class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=0;
        int j;
        for( j=1;j<nums.size();j++)
        {
            
                if(nums[i]!=nums[j]){
                   swap(nums[++i],nums[j]);   
                }
            
          
        }
        return i+1;
    }
};