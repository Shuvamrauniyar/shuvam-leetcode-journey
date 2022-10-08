class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            // if(i==0||(i>0&&nums[i]!=nums[i-1])){
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if((nums[j]-nums[i]==diff)&&(nums[k]-nums[j]==diff)){
                        count++;
                       // cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                    }
                }
            }
            //}
        }
        return count;
    }
};