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