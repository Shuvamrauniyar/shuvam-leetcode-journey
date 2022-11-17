class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negsigncnt=0;
        long long int p=1;
        for(int i=0;i<nums.size();i++)
        {
            // p*=nums[i];
            // if(p<0)
            //     sign=-1;
            // else if(p>0)
            //     sign=1;
            // else
            // {
            //     return 0;
            // }
            // p/=abs(nums[i]);// to prevent the signed integer overflow dividing it by same number and to preserve the sign of real product ,using absolute 
            if(nums[i]<0)
                negsigncnt++;
            else if(nums[i]==0)
                return 0;
            
            
        }
        cout<<negsigncnt<<endl;
        if((negsigncnt&1)==0)
            return 1;
        return -1;
        //return sign;
    }
};