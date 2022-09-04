class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>m;
        int cnt0=count(nums.begin(),nums.end(),0);
        int cnt1=count(nums.begin(),nums.end(),1);
        int cnt2=count(nums.begin(),nums.end(),2);
        cout<<cnt0<<cnt1<<cnt2<<endl;
        int i,j,k;
        for( i=0;i<cnt0;i++)
        {
             nums[i]=0;
        }
        for(j=i;j<cnt1+i;j++)
        {
            nums[j]=1;
        }
        for(k=j;k<cnt2+j;k++)
        {
            nums[k]=2;
        }
         
    }
};