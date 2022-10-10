class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        int i=0;
        for(int count=0;count<2*nums.size();count++)
        {
            if(i==nums.size())
                i=0;
            ans.push_back(nums[i++]);
        }
        return ans;
    }
};