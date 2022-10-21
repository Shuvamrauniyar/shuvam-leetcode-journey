class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        int n=nums.size();
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            if(m.find(nums[i])!=m.end())
            {
                if(abs(i-m[nums[i]])<=k)
                    return true;
            }
            m[nums[i]]=i; 
    }
        return false;
    }
};
//  unordered_set<int> s;
//         if(k>n)k=n-1;
//        if(k==0)return false; 
        
//         for(int i=0;i<n;i++)
//         {
//             if(i>k) //checking if we cross the window boundry because we have to find the answer from within the window of size(k+1)<=n
//                 s.erase(nums[i-k-1]);//sliding the window by 1
//             if(s.find(nums[i])!=s.end())
//                return true;
//             s.insert(nums[i]);
           
//                 cout<<1-*s.begin()<<endl;
//             cout<<1-*s.end()<<endl;
//         }
         
        
//         return false;