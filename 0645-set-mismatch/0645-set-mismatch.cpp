class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
             sort(nums.begin(),nums.end());
        int d;
        int sum=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1]){
                d=nums[i];
            //break;
            }
            sum+=nums[i];
            
            
        }
        sum+=nums[n-1];
        int actualsum=(n*(n+1))/2;
        int missing=actualsum-sum+d;
        return {d,missing};
       
        
        
        
    }
};
/*
        int n=nums.size();
   
         int slow=nums[0];
        int fast=nums[slow];
       
        
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
         fast=0;
        while(fast!=slow)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        int d=nums[slow];
         int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];   
        }
        //sum+=nums[n-1];
        int actualsum=(n*(n+1))/2;
        int missing=actualsum-sum+d;
        return {d,missing};
*/