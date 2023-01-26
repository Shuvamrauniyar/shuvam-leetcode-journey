//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:

    int findsubset(int i,int k, int xorVal,vector<int> &ds,vector<vector<int>>&ans,vector<int>arr,vector<vector<int>>&dp)
    {
        if(i == arr.size())
        {
            if(xorVal == k)
            {
                ans.push_back(ds);
                return 1;
            }
            return 0;
        }
        if(dp[i][xorVal] != -1)
        return dp[i][xorVal];
         xorVal = xorVal ^ arr[i];
        ds.push_back(arr[i]);
        
        int pick = findsubset(i+1,k,xorVal,ds,ans,arr,dp);
        ds.pop_back();
        xorVal =xorVal ^ arr[i];
        int notpick = findsubset(i+1,k,xorVal,ds,ans,arr,dp);
        
        return dp[i][xorVal] = pick + notpick;
    }
    int subsetXOR(vector<int> arr, int N, int K) {
        // code here
        vector<int>ds;
        vector<vector<int>>ans;
        int xorVal = 0;
        int maxXor = 2 * (*max_element(arr.begin(),arr.end()));
        vector<vector<int>>dp(N+1,vector<int>(maxXor+1,-1));
        return findsubset(0,K,xorVal,ds,ans,arr,dp);
       // return ans.size();
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int K;
        cin>>K;
        vector<int> v;
        for(int i = 0;i<N;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }    
        Solution ob;
        cout << ob.subsetXOR(v,N,K) << endl;
    }
    return 0; 
}
// } Driver Code Ends