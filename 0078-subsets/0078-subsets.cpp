class Solution {
public:
        
        void findsubset(int i,vector<int>&nums,vector<int>ds,vector<vector<int>>&ans)
        {
                if(i==nums.size())
                {
                        ans.push_back(ds);
                        return;
                }
                ds.push_back(nums[i]);
                findsubset(i+1,nums,ds,ans);
                ds.pop_back();
                findsubset(i+1,nums,ds,ans);
        }
    vector<vector<int>> subsets(vector<int>& nums) {
      //  int n=nums.size();
            vector<vector<int>>ans;
            vector<int>ds;
                findsubset(0,nums,ds,ans);
                return ans;
                
    }
};