//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findmax(int i,int *arr,int n,vector<int>&dp)
	{
	    if(i==n-1)
	    {
	      return arr[i];
	    }
	    if(i>=n)
	    return 0;
	    if(dp[i]!=-1)
	    return dp[i];
	    int pick=arr[i]+findmax(i+2,arr,n,dp);
	    int notpick=findmax(i+1,arr,n,dp);
	   // cout<<max(pick,notpick)<<endl;
	    return dp[i]=max(pick,notpick);
	}
	int findMaxSum(int *arr, int n) {
	    // code here
	    vector<int>dp(n+1,-1);
	    return findmax(0,arr,n,dp);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends