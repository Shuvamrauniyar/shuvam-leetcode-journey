class Solution {
    public:
    void findpermute(int ind ,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(ind==arr.size()){
            ans.push_back(ds);
        return;
        }
        for(int i=ind;i<arr.size();i++)
        {
            swap(ds[i],ds[ind]);
            findpermute(ind+1,arr,ds,ans);
            //findpermute(i+1,arr,ds,ans);
           // i+1 and ind+1 is different so be careful
            swap(ds[i],ds[ind]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        ds=nums;
        findpermute(0,nums,ds,ans);
        return ans;
    }
};