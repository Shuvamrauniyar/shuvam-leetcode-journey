class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        sort(nums.rbegin(),nums.rend());
        for(int i=0;i<nums.size()-2;i++)
    {
        int sum=nums[i]+nums[i+1]+nums[i+2];
        double s=(double)sum/2;
        double area=sqrt(s*(s-nums[i])*(s-nums[i+1])*(s-nums[i+2]));
        if(area>0)return sum;
        
    }
    return 0;
    }
};