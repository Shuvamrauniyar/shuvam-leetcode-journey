//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int find(int i ,int cnt, int n, int k, int ans, vector<vector<vector<int>>>&dp)
  {
      if(ans > n || i > n)
      return 0;
      if(dp[i][cnt][ans] != -1)
      return dp[i][cnt][ans];
      if(cnt == k)
      {
          if(ans == n)
          return 1;
          return 0;
      }
      int pick = find(i,cnt+1,n,k,ans+i,dp);
      int notpick = find(i+1,cnt,n,k,ans,dp);
      return dp[i][cnt][ans]=pick+notpick;
  }
    int countWaystoDivide(int N, int K) {
        // Code here
       vector<vector<vector<int>>>dp(N+1,vector<vector<int>>(K+1,vector<int>(N+1,-1))); 
        return find(1,0,N,K,0,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        Solution ob;
        cout << ob.countWaystoDivide(N, K) << endl;
    }
}
// } Driver Code Ends