//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
int findMinCost(int i ,int j,vector<vector<int>> &colors, int N, vector<vector<int>>&dp)
{
    if(i == N){
        return 0;
    }
    
     if(dp[i][j+1] != -1)
     return dp[i][j+1];
    
    int mini = INT_MAX;
    int pick = INT_MAX;
    for(int j1 = 0 ;j1<3;j1++)
    {
        if(j1 != j)
       pick = colors[i][j1] + findMinCost(i+1,j1,colors,N,dp);
      mini = min(mini,pick);
        
    }
    return dp[i][j+1] = mini;
  // return mini;
}
    int minCost(vector<vector<int>> &colors, int N) {
        vector<vector<int>>dp(N+1,vector<int>(4,-1));
        // Write your code here.
        return findMinCost(0,-1,colors,N,dp);
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends