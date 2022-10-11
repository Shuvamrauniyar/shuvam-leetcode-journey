class Solution {
public:
    //using hashmap in O(n^2)-time and space -O(n^2)
    int countQuadruplets(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        unordered_map<int,int>m;
        for(int i=1;i<n-2;i++)
        {
            for(int j=0;j<i;j++)
            {
                m[nums[i]+nums[j]]++;
            }
            for(int k=i+2;k<n;k++)
                {
                 
                        count+=m[nums[k]-nums[i+1]];
                }
        }
        return count;
    }
};