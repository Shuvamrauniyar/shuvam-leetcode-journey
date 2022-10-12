class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        sort(nums.rbegin(),nums.rend());
        int sum;
        for(int i=0;i<nums.size()-2;i++)
    {
         sum=nums[i]+nums[i+1]+nums[i+2];
            if(nums[i]<nums[i+1]+nums[i+2])
              return sum;
    }
    return 0;
    }
};