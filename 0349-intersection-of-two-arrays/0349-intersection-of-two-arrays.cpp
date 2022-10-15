class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
      unordered_map<int,int>m;
        for(int num:nums1)
            m[num]=1;
        for(int num:nums2){
            if(m[num]>=1)
            m[num]=2;
            else 
            m[num]=0;
        }
        for(auto i:m)
        {
           if(i.second==2)
               ans.push_back(i.first);
        }
        return ans;
    }
};