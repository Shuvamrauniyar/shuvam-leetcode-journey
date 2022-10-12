class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        sort(nums.rbegin(),nums.rend());
        int sum;
        for(int i=0;i<nums.size()-2;i++)
    {
         sum=nums[i]+nums[i+1]+nums[i+2];
        double s=(double)sum/2;
        int j=i;
            int maxj=i+2;
            bool check=true;
       while(j<=maxj)
       {
        // cout<<nums[j]<<" ";   
           if(nums[j++]>=s){
               check=false;
               break;
           }
       }
            // cout<<endl;
           if(check==true)
            return sum;
    }
    return 0;
    }
};