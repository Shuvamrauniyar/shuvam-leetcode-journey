class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=n*((nums[nums[i]])%n)+nums[i];
        }
      
        //to get the original nums array we can get using nums[i]=nums[i]%n;
        //    for(int i=0;i<nums.size();i++)
        // {
        //    cout<<(nums[i]%n)<<" ";
        // }
         for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]/n;
        }
        //to get the original nums array we can get using nums[i]=nums[i]%n;
        //    for(int i=0;i<nums.size();i++)
        // {
        //    cout<<(nums[i]%n)<<" ";
        // }it will print the same result as nums[i]/n becz nums[i] is changed in just above for loop;
        cout<<endl;
        return nums;
    }
};