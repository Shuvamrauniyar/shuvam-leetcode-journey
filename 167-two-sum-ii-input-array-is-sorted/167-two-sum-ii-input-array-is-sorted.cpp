class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
             int n=v.size();
        //vector<int>ans;
       
        // vector<pair<int,int>>v;
        // for(int i=0;i<n;i++)
        // {
        //     v.push_back({nums[i],i});
        // }
        // sort(v.begin(),v.end());
        int low=0,high=n-1;
     
        while(low<high)
        {
            int sum=v[low]+v[high];
            if(target>sum)
                low++;
            else if(target<sum)
                high--;
            else
            {
                break;
            }
        }
              return {low+1,high+1};//doing this we save space for ans vector
    }
};