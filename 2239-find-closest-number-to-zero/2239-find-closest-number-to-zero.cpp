class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mindiff=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(abs(mindiff)>abs(nums[i])||(abs(mindiff)==nums[i]))
                mindiff=nums[i];
        
        }
        return mindiff;
    }
};