class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=0)
            pos.push_back(nums[i]);
            else
            neg.push_back(nums[i]);
        }
        int p=0,n1=0,k=0;
        while(p<pos.size()&&n1<neg.size())
        {

        nums[k++]=pos[p++];
        nums[k++]=neg[n1++];
        }
        while(p<pos.size())nums[k++]=pos[p++];
        while(n1<neg.size())nums[k++]=neg[n1++];
        return nums;
    }
};