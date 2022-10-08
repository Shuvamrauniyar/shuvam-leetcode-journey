class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
       
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int low=0,high=n-1;
     
        while(low<high)
        {
            int sum=v[low].first+v[high].first;
            if(target>sum)
                low++;
            else if(target<sum)
                high--;
            else
            {
                ans.push_back(v[low].second);
                ans.push_back(v[high].second);
                break;
            }
        }
      
     
        return ans;
    }
};