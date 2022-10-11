class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        int first=INT_MAX,second=INT_MAX;
     for(int i=0;i<n;i++)
     {
        if(nums[i]<=first)
            first=nums[i];
         else if(nums[i]<=second)
             second=nums[i];
         else
             return true;
         //if above two condition is not true then we have found third 
         //element that is greater than both first and second,so return from here.
     }
        return false;
    }
};
