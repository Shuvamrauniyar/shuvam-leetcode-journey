class Solution {
public:
    //  n/3 means at most there will be 2 majority elements that appears more than n/3 times.......n/k means at most (k-1) elements will be there that appear more than n/k times.... 
    vector<int> majorityElement(vector<int>& nums) {
       
        vector<int>ans;
        int n1=INT_MIN,n2=INT_MAX,count1=0,count2=0;
        
        for(int num:nums)
        {
            if(n1==num)
                count1++;
            else if(n2==num)
                count2++;
            else if(count1==0)
            {
                n1=num;
                count1++;
            }
            else if(count2==0)
            {
                n2=num;
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        count1=count2=0;
       for(int num:nums)
       {
            if(num==n1)count1++;
           if(num==n2)count2++;
           
       }
         int n=nums.size();
        if(count1>(n/3))ans.push_back(n1);
        if(count2>(n/3))ans.push_back(n2);
        
        return ans;
    }
};