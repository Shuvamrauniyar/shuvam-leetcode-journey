//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int mod=1e9+7;
	
	int countsubset(int a[],int i,int n,int sum,vector<vector<int>>&dp)
	{
	    if(i==n)//dont do if(i==0 ||sum==0) ,it will show error in this 
	    //problem for testcase like targetsum=1 and arr=[1,0] here ans =count=2.so
	    //we need to traverse till i==n and it is only our base case.
	    {
	       // if(sum==0&&a[i]==0)
	       // return 1;
	        //else
	        if(sum==0)
	        return 1;
	        else
	        return 0;
	    }
	    if(dp[i][sum]!=-1)
	    return dp[i][sum];
	    int pick=0;
	    if(sum>=a[i])
	      pick=countsubset(a,i+1,n,sum-a[i],dp)%mod;
	    int notpick=countsubset(a,i+1,n,sum,dp)%mod;
	    return dp[i][sum]=(pick + notpick)%mod;
	}
	int perfectSum(int a[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        //cout<<a[n]<<endl;
        return countsubset(a,0,n,sum,dp);
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends