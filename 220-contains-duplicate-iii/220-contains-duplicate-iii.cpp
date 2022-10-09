 class Solution {
 public:
bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t)
    {
    		if (!k || t<0 || nums.size()<2)
        		return false;
        	set<int>record;                   
        	auto nLen = nums.size();
        	for (int i = 0; i < nLen;++i)
        	{
        		if (i>k)
        			record.erase(nums[i - k - 1]);         
        		set<int>::iterator lower = record.lower_bound(nums[i] - t);
        		if (lower != record.end() && abs(nums[i] - *lower) <= t)
        			return true;
        
        		record.insert(nums[i]);
        	}
        	return false;
    }
 };
// class Solution {
// public:
//     bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
//         int k=indexDiff;
//         int n=nums.size();
//        unordered_set<int> s;
//         if(k>n)k=n-1;
//        if(k==0)return false; 
//        // int prev;
//         for(int i=0;i<n;i++)
//         {
//             if(i>k) //checking if we cross the window boundry because we have to find the answer from within the window of size(k+1)<=n
//                 s.erase(nums[i-k-1]);//sliding the window by 1
//             if(!s.empty())
//             {
              
//               auto lower=s.lower_bound(nums[i]-)
//             if(min(x,y)<=valueDiff)
//                return true;
//             }
//             s.insert(nums[i]);
            
            
                
//         }
        
//         return false;
//     }
// };