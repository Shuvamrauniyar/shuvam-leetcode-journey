class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n=nums.size();
        int count=0;
        //now using map
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]=1;
        }
        for(int j=1;j<n-1;j++)
        {
         if(m[nums[j]-diff]==1 && m[nums[j]+diff]==1)
         {
             count++;
         }
        }
        return count;
    }
};