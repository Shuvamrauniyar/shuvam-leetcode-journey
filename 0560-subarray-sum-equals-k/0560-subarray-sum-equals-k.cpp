class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
       // int i=0;
        int sum=0;
        unordered_map<int,int>m;
        m[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(m[sum-k])
                count+=m[sum-k];
            m[sum]++;
            
        }
        return count;
    }
};
//this is sliding window technique which works for only positive numbers. 
//int count=0;
//         int i=0;
//         int sum=INT_MIN;
//         for(int j=0;j<nums.size();j++)
//         {
//             if(j==0)
//                 sum=max(sum,nums[j]);
//             else
//             if(sum<k)
//                 sum+=nums[j];
//             if(sum==k){
//                 count++;
//             }
//             while(sum>k){
//                 sum-=nums[i];
//                 i++;
                
//           }
//             //j++;
//         }
//         return count;
//     }