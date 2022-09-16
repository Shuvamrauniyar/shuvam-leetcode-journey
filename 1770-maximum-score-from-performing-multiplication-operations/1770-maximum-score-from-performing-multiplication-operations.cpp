int findmax(int i,int j,int m,vector<int>& nums, vector<int>& mul,vector<vector<int>>&dp)
{
    if(m==mul.size())return 0;
    int pickstart=0;
     int pickend=0;
    if(dp[i][m]!=INT_MIN)return dp[i][m];
    pickstart=nums[i]*mul[m]+findmax(i+1,j,m+1,nums,mul,dp);
    pickend=nums[j]*mul[m]+findmax(i,j-1,m+1,nums,mul,dp);
   // cout<<pickstart<<" "<<pickend<<endl;
    return dp[i][m]=max(pickstart,pickend);
}





class Solution {
public:
    int maximumScore(vector<int>& nums, vector<int>& mul) {
 int m=mul.size();
        int n=nums.size();
         vector<vector<int>> dp(m,vector<int>(m, INT_MIN));
         return findmax(0,nums.size()-1,0,nums,mul,dp);
    }
};
/*

      int ans=0;
        int m=mul.size();
        int oper=m;
        int start,end;
        int i=0;
        for(int j=0;j<oper;j++)
        {
            start=mul[j]*nums[i];
            end=mul[j]*nums[m-1];
           if(start>end){
               ans+=start;
               i++;
        }
            else
            {
                ans+=end;
                m--;
            }
          cout<<ans<<" ";
    }*/