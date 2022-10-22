//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int mod=pow(10,8);
  int findways(int i,vector<int>&dp)
  {
      if(i==0)
      return dp[i]=1;
      if(i<0)
      return 0;
      if(dp[i]!=-1)
      return dp[i];
      int pour1=findways(i-1,dp);
      int pour2=findways(i-2,dp);
      return dp[i]=(pour1+pour2)%mod;
      
  }
    int fillingBucket(int N) {
        // code here
        vector<int>dp(N+1,-1);
        return findways(N,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends