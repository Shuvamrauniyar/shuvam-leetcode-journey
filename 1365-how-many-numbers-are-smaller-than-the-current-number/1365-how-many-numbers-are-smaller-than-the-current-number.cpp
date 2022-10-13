class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans=nums;
        sort(nums.begin(),nums.end());
        unordered_map<int,int>m;
        for(int i=nums.size()-1;i>=0;i--)
            m[nums[i]]=i;
        for(int i=0;i<ans.size();i++)
        {
            ans[i]=m[ans[i]];
        }
        return ans;
    }
};