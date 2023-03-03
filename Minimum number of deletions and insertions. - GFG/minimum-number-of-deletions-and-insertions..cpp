//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string word1, string word2) 
	{ 
	    // Your code goes here
	    int n = word1.size();
        int m = word2.size();

        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        for(int i = 0;i<n ; i++)
        {
            dp[i][0]= 0;
        }
        for(int j = 0; j<m ;j++)
        {
            dp[0][j]= 0;
        }
        int lcs = 0;
        for(int i = 1;i<=n; i++)
        {
            for(int j = 1; j <= m ; j++)
            {
                if(word1[i-1] == word2[j-1]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                    lcs = max(lcs,dp[i][j]);
                }
                else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return (n - lcs)+(m-lcs);
	    
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends