class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
       
        int ans_sum,closest=INT_MAX;
        for(int i=0;i<n-2;i++)
        {
            
             int low=i+1,high=n-1;
        while(low<high)
        {
            int checksum=nums[low]+nums[high]+nums[i];
           
            if(abs(target-checksum)<closest){
                closest=abs(target-checksum);
                ans_sum=checksum;
               
            }
            if(checksum<target)
                low++;
            else if(checksum>target)
                high--;
            else 
            {
                i=n-2;//to break outer for loop bcz we get our closest sum which is                         equal to target itself
                break;//to break inner while loop
            }          //if equal then no more optimal closest sum will be there                            ,all will be either equal or greater .
                
        }
        }
        return ans_sum;
    }
};