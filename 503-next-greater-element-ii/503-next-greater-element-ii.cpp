class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
 int n=nums.size();
        //for 2 10 12 7 - next greater elements are 10 12 -1 10 for circular array
        //so if we take 2 10 12 7 2 10 12 7 we get our answer by applying same logic as used for non circular array
        //now we don't need to create the copy portion we can just use i % n for accessing element 
        stack<int>st;
        vector<int>nge(n);
        int c=0;
        //assuming a joint imaginary array for circular array
        //traverse in back direction to get next greater element from right
        for(int i=2*n-1;i>=0;i--)
        {
            //the stack will store elements in increasing fashion in order from right side
            //so we will remove all elements that are smaller than current element to get next greater element
            while(!st.empty() && st.top()<=nums[i%n])
            {
                st.pop();
            }
            //we only require next greater element for 1st n elements as rest n are copies
            if(i<n)
            {
                //as all smaller elements are already removed so top most element will be next greater element
                if(!st.empty())
                {
                    nge[i]=st.top();
                }
                //if there are no elements in stack then no next greater element exists
                else
                {
                    nge[i]=-1;
                }
            }
            //in last push the current element into stack
            st.push(nums[i%n]);
        }
        return nge;
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