class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>s;
        for(int i=0;i<n-2;i++)
        {
            if(i==0||i>0&&nums[i]!=nums[i-1]){
            int low=i+1,high=n-1;
            int target=-nums[i];
            
            while(low<high)
            {
                vector<int>v;
                int sum=nums[low]+nums[high];
                if(sum==target)
                {
                  //  cout<<"true";
                    v.push_back(nums[low]);
                    v.push_back(nums[high]);
                    v.push_back(nums[i]);
                    //sort(v.begin(),v.end());
                    s.push_back(v);
                    
                    
                while(low<high&&nums[low]==nums[low+1])low++;
                while(low<high && nums[high]==nums[high-1])high--;
                low++;
                high--;
                }
               
                else if(sum<target)
                    low++;
                else
                    high--;
            }
        }
        }
        //vector<vector<int>>v1=s;
        return s;
    }
};