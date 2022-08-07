class Solution {
    public:
    void findcombinations(int ind,int target,vector<vector<int>>&ans,vector<int>&ds,vector<int>&arr)
    {
        if(ind==arr.size()||target==0)
        {
            if(target==0)
            ans.push_back(ds);
            return;
            
        }
        for(int i=ind;i<arr.size();i++)
        {
            if(i>ind &&arr[i]==arr[i-1] )continue;
            if(target<arr[i])break;
            
        
            
            ds.push_back(arr[i]);
        findcombinations(i+1,target-arr[i],ans,ds,arr);
            ds.pop_back();
        
        }
        
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        findcombinations(0,target,ans,ds,candidates);
        return ans;
    }
};