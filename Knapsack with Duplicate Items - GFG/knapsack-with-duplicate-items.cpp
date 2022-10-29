//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int find(int i,int w,int wt[],int val[],vector<vector<int>>&dp)
{
    if(i==0)
    {
        // if(w==0)
        // return 0;
        //  if(w%wt[i]==0)
        return val[i]*(w/wt[i]);
        // return 0;
    }
    if(dp[i][w]!=-1)
    return dp[i][w];
    int pick=0;
    //int pick=INT_MIN;
    if(wt[i]<=w)
    {
        pick=val[i]+find(i,w-wt[i],wt,val,dp);
    }
    int notpick=find(i-1,w,wt,val,dp);
    return dp[i][w]=max(pick,notpick);
}
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>>dp(N,vector<int>(W+1,-1));
        return find(N-1,W,wt,val,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends