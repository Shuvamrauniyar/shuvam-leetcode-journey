class Solution
{
    public:
        int jump(vector<int> &nums)
        {
            if(nums.size()<=1)return 0;
            int maxjmp=nums[0],currmaxjmp=nums[0];
            int jump=1;
            for(int i=0;i<nums.size()-1;i++)
            {
                maxjmp=max(nums[i]+i,maxjmp);
                if(i==currmaxjmp)
                {
                    currmaxjmp=maxjmp;
                    jump++;
                }
            }
                return jump;
        }
};
/*
int maxjmp = nums[0];
            int count = 0;
            for (int i = 0; i < nums.size(); i++)
            {
               
                int x=maxjmp;
                int idx=0;
               // int j=i;
                while(i<(nums.size()-1)&&i<maxjmp){
                    if(x<(nums[i+1]+i+1)){
                    x=nums[i+1]+i+1;
                        cout<<x<<" ";
                    idx=i+1;
                    }
                    i++;
                }
                 i=idx;
                cout<<endl;
                cout<<i<<" ";
                maxjmp=x;
               // cout<<x<<" ";
                count++;
                 if (x >= nums.size() - 1){
                     count++;
                    break;
                 }
                // if (maxjmp < nums[i] + i)
                // {
                //     count++;
                //     maxjmp = nums[i] + i;
                //     cout<<maxjmp<<" ";
                // }
            */