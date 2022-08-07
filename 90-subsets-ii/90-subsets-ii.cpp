class Solution {
    public:
    void findsubsets(int ind,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans)
    {
       
            ans.push_back(ds);
        
        for(int i=ind;i<arr.size();i++)
        {
            if(i!=ind && arr[i]==arr[i-1]) continue;
            
            ds.push_back(arr[i]);
            //findsubsets(ind+1,arr,ds,ans);it will get false answer ,see the diff betwn ind and i
            findsubsets(i+1,arr,ds,ans);
            ds.pop_back();
             
        }
}
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        findsubsets(0,nums,ds,ans);
        return ans;
    }
};