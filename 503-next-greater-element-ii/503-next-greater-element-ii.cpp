class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
         vector<int>ans;
        stack<int>s;
        int n=nums.size();
        for(int i=2*n-1;i>=0;i--)
        {
            while(!s.empty()&&s.top()<=nums[i%n])
                s.pop();
         if(i<n)
         {   if(!s.empty())
              ans.push_back(s.top());
            else
                 ans.push_back(-1);
         }
          
            s.push(nums[i%n]);
        
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
    
};
// vector<int>ans;
//         stack<int>s;
//         int n=nums.size();
//         for(int i=2*n-1;i>=0;i--)
//         {
//             while(!s.empty()&&s.top()<=nums[i%n])
//                 s.pop();
//          if(i<n)
//          {   if(!s.empty())
//               ans.push_back(s.top());
//             else
//                  ans.push_back(-1);
//          }
          
//             s.push(nums[i%n]);
        
//         }
//         return ans;