class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign;
        long long int p=1;
        for(int i=0;i<nums.size();i++)
        {
            p*=nums[i];
            if(p<0)
                sign=-1;
            else if(p>0)
                sign=1;
            else
            {
                return 0;
            }
            p/=abs(nums[i]);
            
        }
        return sign;
    }
};